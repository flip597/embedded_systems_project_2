#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <bitmaps.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define X_platforms 0 // Indexes into the 'platform_pos' array
#define Y_platforms 1

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_reset_level 4 // reset_level pin # (or -1 if sharing Arduino reset_level pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_reset_level);

const uint8_t NUM_Platforms = 6;
static int8_t i, platform_pos[NUM_Platforms][2];  //Array to store all platform positions

const uint8_t button_pin = 14;
const uint8_t pot_pin = 15;
const uint8_t speaker_pin = 6;

const float pot_running_avg = 0.98;  //Used to eliminate the ocasionl twitching of the jumpr when the pot was sitting between two values.

const uint8_t jumpr_pixel_height = 12;
const uint8_t jumpr_pixel_width = 10;
const uint8_t platform_pixel_height = 3;
const uint8_t platform_pixel_width = 16;

const uint8_t debounce_delay_ms = 50;

uint8_t jump_height = 0;

uint16_t jumpr_x_pos = 0;
uint8_t jumpr_y_pos = 128 - (platform_pixel_height + jumpr_pixel_height);

uint8_t current_platform = 0;
uint8_t level = 0;

bool falling = false;
bool jumping = true;
bool button_pushed = false;
bool initialize_platforms = true;
bool game_over = false;
bool play_end_tone = false;

void ISR_button_pushed();
void draw_platforms();
void draw_jumpr();
void draw_score();
void reset_level(uint8_t level_);
bool jumpr_x_equals_platform_x(uint8_t f);

void setup()
{
	// SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
	if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
	{ // Address 0x3C for 128x32
		Serial.println(F("SSD1306 allocation failed"));
	}

	display.display();
	display.clearDisplay();

	pinMode(speaker_pin, OUTPUT);		//Setup I/O
	pinMode(pot_pin, INPUT);
	pinMode(button_pin, INPUT_PULLUP); //Button connected to ground
	attachInterrupt(digitalPinToInterrupt(button_pin), ISR_button_pushed, FALLING);

	display.setRotation(3);	//Rotate display - 0 = Normal, 1 = 90 degrees, 2 = 180 degrees, 3 = 270 degrees

}

void loop()
{
  static uint32_t button_last_pressed_time = 0;

	enum states
	{
		start_screen,
		playing,
		end_screen
	};
	static enum states current_state = start_screen;

	display.clearDisplay();

	switch (current_state)
	{
	case start_screen:
		display.drawBitmap(0, 0, start_screen_bitmap, 64, 128, WHITE); //Display start screen
		draw_jumpr();
		if (button_pushed)		//Non-blocking debounciong
		{
			button_pushed = false;
			if ((millis() - button_last_pressed_time) >= debounce_delay_ms)
			{
			button_last_pressed_time = millis();
			current_state = playing;
			}
		}
		break;

	case playing:
		draw_platforms();
		draw_jumpr();
		draw_score();
		if (button_pushed)
		{
			button_pushed = false;
		}
		if (game_over)
		{
			current_state = end_screen;
			play_end_tone = true;
		}
		break;

	case end_screen:
		display.drawBitmap(0, 0, end_screen_bitmap, 64, 128, WHITE);
		draw_score();
		if(button_pushed){
			button_pushed = false;
			if ((millis() - button_last_pressed_time) >= debounce_delay_ms)
			{
			button_last_pressed_time = millis();
			game_over = false;
			reset_level(0);
			current_state = start_screen;
			}
		}
		break;
	}

	if(play_end_tone){		//Play game over sound once
		play_end_tone = false;
		tone(speaker_pin,500,200);
		delay(300);		//Blokcing function - But is during a time when does not matter
		tone(speaker_pin,200,200);
		}

	display.display(); //Display buffer on screen

}

void ISR_button_pushed()
{
	button_pushed = true;
}

void reset_level(uint8_t new_level)		//Reset all game variables for a new level
{
	jumpr_y_pos = 128 - (platform_pixel_height + jumpr_pixel_height);	//Reset jumpr to bottom of screen
	jump_height = 0;
	falling = false;
	jumping = true;
	level = new_level;
	current_platform = 0;
	initialize_platforms = true;		//Used to reset platform positions
}

bool jumpr_x_equals_platform_x(uint8_t f){	//Returns true if jumpr x position is within platform x pos
	if (((platform_pos[f][X_platforms]) - 2) <= jumpr_x_pos && ((platform_pos[f][X_platforms]) + 8) >= jumpr_x_pos)
			{ //2Pixel overlap - Aslong as jumpr is no more than 2 pixels on either side of the platform it can jump on it
			return true;
			}
			else{
				return false;
			}
}

void draw_score()
{
	if(game_over)
	{
		display.setTextSize(2);				//Draw score large
		display.setCursor(15, 75);			//Draw just under Game Over text.
	}
	else
	{
		display.setTextSize(1);				//Draw score small
		display.setCursor(0, 0);			//Draw out of the way in the top right corner
	}								 
	display.setTextColor(WHITE);																 
	display.print(level);					//Draw score
	display.print(".");
	display.print(current_platform);
}


void draw_jumpr()
{
static uint8_t gravity = 3;					//Increase to make game harder
static uint8_t raw_jumpr_x_pos = 0;

	if (not falling)
	{
		if (jumping)		//Upwards cycle of jump
		{
			jump_height = jump_height + gravity;
			tone(speaker_pin,(((jump_height/gravity)*200)+1000),40);		//Play jump sound
		}
		else				//Downward cycle of jump
		{
			jump_height = jump_height - gravity;
		}

		if (jump_height >= 30)		//Max jump height
		{
			jumping = false;
		}
		if (jump_height <= 0)		//Bottom of jump
		{
			jumping = true;
		}
	}

	if (falling)
	{
		jumpr_y_pos = jumpr_y_pos + gravity;
		tone(speaker_pin,(((128-jumpr_y_pos)*30)+800),10);		//Play falling sound
		if (jumpr_y_pos >= (128))								//Jumpr falls to bottom - game over
		{
			game_over = true;
		}
	}

	if (((jumpr_y_pos + jumpr_pixel_height) - jump_height) <= 1)		//Jumpr reaches top - next level
	{
		level++;
		reset_level(level);
	}

	if (current_platform == 0)			//Continually displays the large intial platform until new platform is reached
	{
		display.drawBitmap(0, 128 - platform_pixel_height, initial_platform_bitmap, 64, platform_pixel_height, WHITE);
	}

	raw_jumpr_x_pos = map((analogRead(pot_pin)), 0, 1024, 0, (SCREEN_HEIGHT - jumpr_pixel_width));		//Map potetionometer value to jumpr x value
	jumpr_x_pos = (pot_running_avg * raw_jumpr_x_pos) + ((1-pot_running_avg)*jumpr_x_pos);				//Use rolling average tecnique to smooth any potentiometer twitching
	display.drawBitmap(jumpr_x_pos, (jumpr_y_pos - jump_height), jumpr_bitmap, jumpr_pixel_width, jumpr_pixel_height, WHITE); //Color to draw with_Background is black

	if (not jumping)		//Check only when jumpr on downward cycle of jump
	{
		for (int i = 0; i < NUM_Platforms; i++)		//Check for all platforms
		{
			if (jumpr_x_equals_platform_x(i))	//check if jumpr touching platfortm in x pos
			{ 
				if ((platform_pos[i][Y_platforms]) == ((jumpr_y_pos - jump_height) + jumpr_pixel_height))	//Check if jumpr touching platform in y pos
				{
					jumpr_y_pos = ((platform_pos[i][Y_platforms]) - jumpr_pixel_height);		//Make Jumpr pos equal to platform height
					jump_height = 0;			//Reset jump values as new platform reached
					jumping = true;
					falling = false;
					current_platform = i;		//New platform reached, increase score
				}
			}
		}
	}
	if ((jump_height == 30) && (jumpr_y_pos <= 110))
	{ //Check Jumpr is on platform at bottom of jump height & Cannot fall on initial platform
		if (not jumpr_x_equals_platform_x(current_platform))
		{
			falling = true;
			jumping = false;
		}
	}
}


void draw_platforms()
{
	if (initialize_platforms)
	{
		initialize_platforms = false;
		for (i = 1; i < NUM_Platforms; i++)				// Initialize platform positions once per level
		{
			platform_pos[i][X_platforms] = (random(0, 4)) * platform_pixel_width;		//Random position out of 4 possible positions - Keeps platforms from overlapping or drawin outside screen
			platform_pos[i][Y_platforms] = ((128 - platform_pixel_height) - (i * 21)); //i*#, # needs to be divisaible by gravity
		}

		while (jumpr_x_equals_platform_x(1)) //Makes sure the 1st Platform is not in the same place as jumpr
		{
			platform_pos[1][X_platforms] = (random(0, 4)) * platform_pixel_width;
		}
	}

	for (i = current_platform; i < NUM_Platforms; i++)   	// Draw each platform
	{
		display.drawBitmap(platform_pos[i][X_platforms], (platform_pos[i][Y_platforms]), platform_bitmap, platform_pixel_width, platform_pixel_height, WHITE);
	}

	for (i = 0; i <= current_platform; i++)			//Remove previous platforms
	{
		platform_pos[i][X_platforms] = 200;
		platform_pos[i][Y_platforms] = 200;
	}
}