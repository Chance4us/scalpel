// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x80077D30
// line start: 74
// line end:   96
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077D38
// line start: 101
// line end:   114
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077D40
// line start: 119
// line end:   125
void ResetPal__Fv() {
}


// address: 0x80077D48
// line start: 133
// line end:   140
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077D78
// line start: 175
// line end:   176
bool GetFadeState__Fv() {
}


// address: 0x80077D84
// line start: 203
// line end:   227
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077E88
// line start: 235
// line end:   258
void SmearScreen__Fv() {
}


// address: 0x80077E90
// line start: 261
// line end:   266
void DrawFadedScreen__Fv() {
}


// address: 0x80077EE4
// line start: 285
// line end:   297
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077FA0
// line start: 304
// line end:   332
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078030
// line start: 339
// line end:   346
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80078088
// line start: 354
// line end:   389
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078138
// line start: 396
// line end:   406
bool PaletteFadeOut__Fi(int fr) {
}

