// C:\diabpsx\PSXSRC\SCRATCH.CPP

#include "types.h"

// address: 0x800A0DC0
void SCR_Open__Fv() {
}


// address: 0x80090690
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x800906C4
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x80090754
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090830
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800908B0
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80090950
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x800909E4
void UpdatePals__13PalCollection(struct PalCollection *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *ThisPal;
	{
		// register: 17
		// size: 0x18
		register struct PalEntry *NextPal;
	}
}


// address: 0x80090A58
void SCR_Handler__Fv() {
}


// address: 0x80090BD8
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090BEC
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80090C18
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80090C20
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80090C28
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80090C34
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}

