const unsigned char start_screen_bitmap [] = {
// 'title_portrait, 64x128px
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x03, 0x78, 0x0f, 0x7f, 0x1f, 0xe0, 
	0x00, 0x7f, 0x03, 0x7c, 0x1f, 0x7f, 0xdf, 0xf8, 0x00, 0x7f, 0x03, 0x7c, 0x1f, 0x73, 0xfc, 0x78, 
	0x00, 0x7f, 0x03, 0x7e, 0x3f, 0x70, 0xfc, 0x38, 0x00, 0x7f, 0x03, 0x7e, 0x3f, 0x70, 0xfc, 0x18, 
	0x00, 0x7f, 0x03, 0x7f, 0x7f, 0x70, 0xfc, 0x38, 0x00, 0x7f, 0x03, 0x77, 0x77, 0x71, 0xfc, 0xf8, 
	0x30, 0x7b, 0x03, 0x73, 0xf7, 0x7f, 0xdf, 0xf0, 0x3d, 0xfb, 0x07, 0x73, 0xe7, 0x7f, 0x9f, 0xe0, 
	0x7f, 0xf3, 0x87, 0x71, 0xe7, 0x70, 0x1c, 0xf0, 0x7f, 0xf3, 0xcf, 0x71, 0xc7, 0x70, 0x1c, 0x78, 
	0x3f, 0xe1, 0xfe, 0x70, 0xc7, 0x70, 0x1c, 0x38, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xfc, 0x1e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xf3, 0xe7, 0xcf, 0x3c, 0x3e, 0x7c, 0x00, 0x01, 0x9b, 0x37, 0xd9, 0x64, 0x08, 0xe6, 0x00, 
	0x01, 0x9b, 0x36, 0x1c, 0x70, 0x08, 0xc6, 0x00, 0x01, 0x9b, 0xf7, 0xcf, 0x3c, 0x08, 0xc2, 0x00, 
	0x01, 0xf3, 0xe6, 0x01, 0x86, 0x08, 0xc6, 0x00, 0x01, 0x83, 0x67, 0xd9, 0xe6, 0x08, 0x6e, 0x00, 
	0x01, 0xfb, 0x37, 0xff, 0xff, 0xbe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf7, 0xe3, 0x1f, 0x7e, 0x00, 0x00, 0x00, 0x01, 0x91, 0x87, 0x19, 0x98, 0x00, 0x00, 
	0x00, 0x01, 0xc1, 0x87, 0x99, 0x98, 0x00, 0x00, 0x00, 0x00, 0xf1, 0x8d, 0x9f, 0x98, 0x00, 0x00, 
	0x00, 0x00, 0x19, 0x8f, 0x9f, 0x18, 0x00, 0x00, 0x00, 0x01, 0x99, 0x8f, 0xdb, 0x18, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xf8, 0x79, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char end_screen_bitmap [] = {
	// 'End_screen, 64x128px
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0xfe, 0x07, 0x81, 0xf0, 0x1f, 0x7f, 0xf0, 0x07, 0xff, 0x07, 0xc1, 0xf0, 0x1f, 0x7f, 0xf0, 
	0x0f, 0x9e, 0x07, 0xc1, 0xf8, 0x3f, 0x7f, 0xf0, 0x1e, 0x02, 0x0f, 0xe1, 0xf8, 0x3f, 0x70, 0x00, 
	0x1e, 0x00, 0x0f, 0xe1, 0xfc, 0x7f, 0x70, 0x00, 0x3c, 0x00, 0x1e, 0xf1, 0xfc, 0x7f, 0x78, 0x00, 
	0x3c, 0x00, 0x1c, 0xf1, 0xde, 0xf7, 0x7f, 0xe0, 0x3c, 0x07, 0x3c, 0x71, 0xde, 0xf7, 0x7f, 0xe0, 
	0x3c, 0x07, 0x3c, 0x79, 0xcf, 0xe7, 0x7f, 0xe0, 0x1c, 0x07, 0x3f, 0xf9, 0xcf, 0xe7, 0x70, 0x00, 
	0x1e, 0x07, 0x7f, 0xfd, 0xc7, 0xc7, 0x70, 0x00, 0x1f, 0x07, 0x7f, 0xfd, 0xc7, 0xc7, 0x70, 0x00, 
	0x0f, 0xff, 0xf0, 0x1f, 0xc3, 0x87, 0x7f, 0xf0, 0x07, 0xff, 0xe0, 0x1f, 0xc1, 0x07, 0x7f, 0xf0, 
	0x7f, 0xff, 0xe0, 0x0f, 0xc0, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x9e, 0x03, 0xff, 0xfb, 0xff, 0x00, 
	0x01, 0xff, 0xce, 0x03, 0xbf, 0xfb, 0xff, 0x80, 0x03, 0xe3, 0xef, 0x07, 0xbf, 0xfb, 0x8f, 0x80, 
	0x07, 0xc0, 0xf7, 0x07, 0xb8, 0x03, 0x83, 0xc0, 0x07, 0x80, 0xf7, 0x87, 0x38, 0x03, 0x83, 0xc0, 
	0x07, 0x00, 0x77, 0x8f, 0x38, 0x03, 0x83, 0xc0, 0x07, 0x00, 0x7b, 0x8e, 0x3f, 0xf3, 0x83, 0xc0, 
	0x07, 0x00, 0x7b, 0xde, 0x3f, 0xf3, 0xff, 0x80, 0x07, 0x00, 0x71, 0xde, 0x3f, 0xf3, 0xff, 0x80, 
	0x07, 0x00, 0x71, 0xfc, 0x38, 0x03, 0xfe, 0x00, 0x07, 0x80, 0xf1, 0xfc, 0x38, 0x03, 0x8f, 0x00, 
	0x03, 0xc1, 0xe0, 0xf8, 0x38, 0x03, 0x8f, 0x00, 0x03, 0xff, 0xe0, 0xf8, 0x3f, 0xfb, 0x87, 0x80, 
	0x00, 0xff, 0xc0, 0x78, 0x3f, 0xfb, 0x83, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x70, 0x00, 0x00, 0x3f, 0x3f, 0xff, 0xbf, 0xff, 0x70, 0x00, 
	0x00, 0x30, 0x60, 0x61, 0xf1, 0xf0, 0x70, 0x00, 0x00, 0x3c, 0x60, 0xe0, 0xf1, 0xfe, 0x00, 0x00, 
	0x00, 0x1f, 0xe0, 0xe0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xe0, 0xe0, 0xff, 0x70, 0x20, 0x00, 
	0x00, 0x11, 0xf1, 0x61, 0xb3, 0x70, 0x70, 0x00, 0x00, 0x3f, 0xbf, 0xff, 0xb3, 0xff, 0x70, 0x00, 
	0x00, 0x3f, 0xff, 0xff, 0xf1, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf3, 0xe7, 0xcf, 0x3c, 0x3e, 0x7c, 0x00, 
	0x01, 0x9b, 0x37, 0xd9, 0x64, 0x08, 0xe6, 0x00, 0x01, 0x9b, 0x36, 0x1c, 0x70, 0x08, 0xc6, 0x00, 
	0x01, 0x9b, 0xf7, 0xcf, 0x3c, 0x08, 0xc2, 0x00, 0x01, 0xf3, 0xe6, 0x01, 0x86, 0x08, 0xc6, 0x00, 
	0x01, 0x83, 0x67, 0xd9, 0xe6, 0x08, 0x6e, 0x00, 0x01, 0xfb, 0x37, 0xff, 0xff, 0xbe, 0xfe, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc7, 0xcc, 0x7f, 0xb6, 0x36, 0x6f, 0xc0, 
	0x06, 0x6c, 0xee, 0x66, 0x37, 0x36, 0x6f, 0x80, 0x04, 0x0c, 0x6e, 0x66, 0x37, 0x36, 0x6c, 0x00, 
	0x0c, 0x08, 0x6f, 0x66, 0x37, 0xb6, 0x6f, 0x80, 0x04, 0x0c, 0x6d, 0xe6, 0x36, 0xf6, 0x6c, 0x00, 
	0x07, 0xee, 0xcc, 0xe6, 0x36, 0x76, 0x6f, 0x80, 0x0f, 0xef, 0xec, 0x6f, 0xb6, 0x37, 0xef, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char platform_bitmap [] = {
	// 'platform_2, 16x3px
	0x7f, 0xfe, 0x80, 0x01, 0x7f, 0xfe
};

const unsigned char jumpr_bitmap [] = {
	// 'Jumper, 10x12px
	0x1e, 0x00, 0x73, 0x80, 0xc0, 0xc0, 0x92, 0x40, 0x92, 0x40, 0x80, 0x40, 0xc0, 0xc0, 0x61, 0x80, 
	0x33, 0x00, 0x1e, 0x00, 0x12, 0x00, 0xf3, 0xc0
};

const unsigned char initial_platform_bitmap [] = {
	// 'start_platform, 64x3px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
