// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80093970
// line start: 94
// line end:   128
void DrawArrow__Fii(int x1, int y1) {
	// register: 19
	register int bright;
	// register: 18
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 23
	register char r;
	// register: 22
	register char b;
	{
		// register: 20
		register int i;
	}
}


// address: 0x80093BB0
// line start: 136
// line end:   216
void show_spell_dir__Fi(int pnum) {
	// address: 0xFFFFFFD0
	// size: 0x22D0
	auto struct PlayerStruct *player;
	// register: 23
	register int ScrXOff;
	// register: 22
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int cp;
	// register: 17
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 21
	register int otx;
	// register: 20
	register int oty;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT R;
	// register: 30
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80093F08
// line start: 230
// line end:   279
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x1C
	register struct Spell_Target *spl;
}


// address: 0x80093F7C
// line start: 287
// line end:   296
void select_belt_item__Fi(int pnum) {
}


// address: 0x80093F84
// line start: 304
// line end:   313
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80093FEC
// line start: 320
// line end:   338
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094120
// line start: 344
// line end:   364
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x8009425C
// line start: 373
// line end:   375
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094288
// line start: 383
// line end:   385
void pad_func_down__Fi(int pnum) {
}


// address: 0x800942B4
// line start: 393
// line end:   394
void pad_func_left__Fi(int pnum) {
}


// address: 0x800942BC
// line start: 401
// line end:   402
void pad_func_right__Fi(int pnum) {
}


// address: 0x800942C4
// line start: 420
// line end:   433
void pad_func_select__Fi(int pnum) {
}


// address: 0x800943B4
// line start: 443
// line end:   505
void pad_func_Attack__Fi(int pnum) {
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80094724
// line start: 512
// line end:   561
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80094A34
// line start: 565
// line end:   588
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x80094B8C
// line start: 592
// line end:   610
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x1C
	register struct Spell_Target *spl;
}


// address: 0x80094C10
// line start: 617
// line end:   773
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 20
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 22
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 21
	register unsigned char DoTarget;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80095324
// line start: 780
// line end:   787
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095418
// line start: 799
// line end:   812
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80095554
// line start: 835
// line end:   847
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095674
// line start: 852
// line end:   863
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009578C
// line start: 868
// line end:   872
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80095838
// line start: 886
// line end:   908
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80095904
// line start: 946
// line end:   957
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80095A1C
// line start: 983
// line end:   993
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80095A98
// line start: 1021
// line end:   1057
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x80095C70
// line start: 1065
// line end:   1066
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80095C98
// line start: 1076
// line end:   1077
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x80095CC0
// line start: 1082
// line end:   1097
int get_max_find_size__FPici(int *lsize, char mask, int pnum) {
	// register: 19
	register int maxlen;
	// register: 18
	register int size;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 3
					register int l;
				}
			}
		}
	}
}


// address: 0x80095E00
// line start: 1101
// line end:   1128
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80095F08
// line start: 1132
// line end:   1264
void DrawObjSelector__Fi(int pnum) {
	// register: 22
	// size: 0x22D0
	register struct PlayerStruct *player;
	// address: 0xFFFFFF48
	// size: 0x1E
	auto char str[30];
	// register: 19
	// size: 0x6C
	register struct CPad *Pad;
	// address: 0xFFFFFF68
	auto int list_size;
	// address: 0xFFFFFF70
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 20
		register int i;
		{
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x8009673C
// line start: 1268
// line end:   1292
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int oseldata;
	}
}


// address: 0x80096818
// line start: 1301
// line end:   1307
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x80096924
// line start: 1316
// line end:   1386
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 10
	register char co;
}


// address: 0x80096CFC
// line start: 1391
// line end:   1445
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int dir;
	// register: 19
	register int front_range;
	{
		{
			// register: 17
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 19
						register int j;
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80096F50
// line start: 1490
// line end:   1515
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8009718C
// line start: 1516
// line end:   1516
void _GLOBAL__D_gplayer() {
}


// address: 0x800971B4
// line start: 1516
// line end:   1516
void _GLOBAL__I_gplayer() {
}


