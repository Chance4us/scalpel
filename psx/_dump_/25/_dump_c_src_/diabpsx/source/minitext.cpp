// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x80047308
// line start: 110
// line end:   113
void FreeQuestText__Fv() {
}


// address: 0x80047310
// line start: 117
// line end:   121
void InitQuestText__Fv() {
}


// address: 0x8004731C
// line start: 129
// line end:   166
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


// address: 0x8004745C
// line start: 175
// line end:   214
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x80047570
// line start: 219
// line end:   225
void DrawQTextBack__Fv() {
}


// address: 0x800475E0
// line start: 232
// line end:   249
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8004767C
// line start: 265
// line end:   375
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 30
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x800479C4
// line start: 378
// line end:   378
void _GLOBAL__D_QBack() {
}


// address: 0x800479EC
// line start: 378
// line end:   378
void _GLOBAL__I_QBack() {
}


