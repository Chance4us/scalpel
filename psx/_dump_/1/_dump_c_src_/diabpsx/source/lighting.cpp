// C:\diabpsx\SOURCE\LIGHTING.CPP

#include "types.h"

// address: 0x80046060
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800460C8
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x8004613C
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x800461A8
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 4
	register int v;
	// register: 22
	register int colour_mask;
	// register: 17
	register int shift_mask;
	// register: 12
	register int shake;
	// address: 0xFFFFFFA8
	auto int light_x;
	// address: 0xFFFFFFB0
	auto int light_y;
	// address: 0xFFFFFFB8
	auto int block_x;
	// register: 9
	register int block_y;
	// register: 23
	register int dist_y;
	// register: 11
	register int max_x;
	// register: 6
	register int mult;
	// register: 7
	register int mult_st;
	// register: 21
	register int radius_block;
	// register: 7
	register int scr_x;
	// register: 8
	register int scr_y;
	// register: 6
	register int temp_x;
	// register: 5
	register int temp_y;
	// register: 19
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x80046E58
void DoUnLight__Fv() {
	// register: 6
	register int x;
	// register: 7
	register int y;
	// register: 11
	register int max_x;
	// register: 16
	register int max_y;
	// register: 14
	register int radius_block;
	// register: 13
	register int nXPos;
	// register: 12
	register int nYPos;
}


// address: 0x8004709C
void DoUnVision__Fiii(int nXPos, int nYPos, int nRadius) {
	// register: 4
	register int i;
	// register: 6
	register int j;
	// register: 3
	register int x1;
	// register: 9
	register int y1;
	// register: 8
	register int x2;
	// register: 5
	register int y2;
}


// address: 0x80047160
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 16
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// register: 9
	register int nLineLen;
	// register: 21
	register int nBlockerFlag;
	// register: 8
	register int j;
	// register: 20
	register int k;
	// register: 2
	register int v;
	// register: 5
	register int x1adj;
	// register: 7
	register int x2adj;
	// register: 4
	register int y1adj;
	// register: 6
	register int y2adj;
}


// address: 0x80047670
void FreeLightTable__Fv() {
}


// address: 0x80047678
void InitLightTable__Fv() {
}


// address: 0x80047680
void MakeLightTable__Fv() {
}


// address: 0x80047688
void InitLightMax__Fv() {
}


// address: 0x800476AC
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x800476F0
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80047784
void AddUnLight__Fi(int i) {
}


// address: 0x800477B4
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x800477E0
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80047818
void light_fix__Fi(int i) {
}


// address: 0x80047820
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80047858
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x8004789C
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x800478CC
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x800479F8
void SavePreLighting__Fv() {
}


// address: 0x80047A00
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80047A50
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80047B54
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80047C08
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x80047CC0
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}

