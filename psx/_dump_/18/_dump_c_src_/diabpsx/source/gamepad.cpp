// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80070B70
// line start: 97
// line end:   160
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x8007102C
// line start: 171
// line end:   179
void CloseInvChr__Fv() {
}


// address: 0x80071094
// line start: 188
// line end:   199
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80071140
// line start: 208
// line end:   239
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x800711B0
// line start: 248
// line end:   278
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071220
// size: 0x9C
// line start: 291
// line end:   318
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071350
// line start: 327
// line end:   329
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071390
// line start: 338
// line end:   341
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800713D4
// line start: 350
// line end:   353
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071418
// line start: 394
// line end:   452
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071688
// line start: 462
// line end:   515
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071848
// line start: 523
// line end:   542
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800718A4
// line start: 550
// line end:   553
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800718E0
// line start: 562
// line end:   590
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071980
// line start: 598
// line end:   710
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071D64
// line start: 720
// line end:   749
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071E38
// line start: 760
// line end:   806
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071F50
// line start: 817
// line end:   826
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071F94
// line start: 834
// line end:   925
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
	// register: 17
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x80072288
// line start: 935
// line end:   996
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072558
// line start: 1004
// line end:   1047
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
}


// address: 0x80072780
// line start: 1055
// line end:   1074
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072934
// line start: 1195
// line end:   1505
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
													// register: 6
													register unsigned long msk;
													{
														{
															{
																{
																	{
																		{
																			{
																				{
																					{
																						{
																							{
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80073040
// line start: 1510
// line end:   1602
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073238
// line start: 1608
// line end:   1625
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x800732E8
// line start: 1637
// line end:   1638
void Init_GamePad__Fv() {
}


// address: 0x80073318
// line start: 1643
// line end:   1656
void InitGamePadVars__Fv() {
}


