// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x80047F20
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x80047F28
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x80047F34
// line start: 127
// line end:   168
void CalcTextSpeed__FPCc(char *Name) {
	// register: 16
	register char *ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto char SpeechName[16];
	// register: 19
	register unsigned long SfxFrames;
	// register: 2
	register unsigned long TextHeight;
	// register: 18
	register int NoLines;
	// register: 17
	register int cw;
}


// address: 0x80048074
// line start: 177
// line end:   205
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x8004819C
// line start: 210
// line end:   216
void DrawQTextBack__Fv() {
}


// address: 0x8004820C
// line start: 224
// line end:   232
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80048298
// line start: 239
// line end:   259
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80048364
// line start: 265
// line end:   355
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 21
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 22
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
}


// address: 0x80048694
// line start: 359
// line end:   359
void _GLOBAL__D_QBack() {
}


// address: 0x800486BC
// line start: 359
// line end:   359
void _GLOBAL__I_QBack() {
}


