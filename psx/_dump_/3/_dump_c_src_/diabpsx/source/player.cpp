// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x8005BB9C
// line start: 270
// line end:   271
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BBE0
// line start: 275
// line end:   276
bool plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC24
// line start: 412
// line end:   418
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC44
// line start: 528
// line end:   547
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC4C
// line start: 554
// line end:   565
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005BC68
// line start: 574
// line end:   585
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BC8C
// line start: 591
// line end:   672
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005BEC8
// line start: 719
// line end:   836
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005C2E4
// line start: 843
// line end:   849
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005C34C
// line start: 855
// line end:   891
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005C4BC
// line start: 898
// line end:   950
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 6
	register long e;
	{
		{
			// register: 4
			register long lLevel;
			// register: 3
			register long lMax;
			{
				{
					// register: 17
					register int l;
					{
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


// address: 0x8005C6C0
// line start: 956
// line end:   963
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	// register: 3
	register int totplrs;
	{
		// register: 4
		register int i;
		{
			{
			}
		}
	}
}


// address: 0x8005C744
// line start: 972
// line end:   1136
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x8005CB2C
// line start: 1146
// line end:   1150
void InitMultiView__Fv() {
}


// address: 0x8005CB88
// line start: 1251
// line end:   1252
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005CBCC
// line start: 1306
// line end:   1315
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005CC60
// line start: 1322
// line end:   1335
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005CD54
// line start: 1341
// line end:   1345
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CD68
// line start: 1351
// line end:   1371
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8005CDCC
// line start: 1379
// line end:   1398
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005CE58
// line start: 1403
// line end:   1422
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEBC
// line start: 1430
// line end:   1488
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800D4CE0
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005CEF8
// line start: 1496
// line end:   1518
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF24
// line start: 1615
// line end:   1630
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005CFC0
// line start: 1656
// line end:   1671
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005D070
// line start: 1677
// line end:   1718
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005D228
// line start: 1751
// line end:   1767
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 13
	register int pp;
	// register: 4
	register int pn;
	// register: 5
	register int x;
	// register: 10
	register int y;
}


// address: 0x8005D348
// line start: 1774
// line end:   1807
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
	// register: 16
	register int pd;
}


// address: 0x8005D478
// line start: 1814
// line end:   1843
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005D610
// line start: 1849
// line end:   1886
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
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


// address: 0x8005D7D4
// line start: 1892
// line end:   2006
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// address: 0xFFFFFF48
	// size: 0x94
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 20
	register unsigned char diablolevel;
	{
		{
			{
				{
					{
						// register: 2
						register int pdd;
					}
				}
			}
		}
	}
}


// address: 0x8005DB88
// line start: 2011
// line end:   2177
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005DFD0
// line start: 2184
// line end:   2206
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005E114
// line start: 2212
// line end:   2214
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005E134
// line start: 2220
// line end:   2245
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 16
	register int mx;
	{
		{
		}
	}
}


// address: 0x8005E41C
// line start: 2251
// line end:   2271
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4D8
// line start: 2278
// line end:   2332
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005E684
// line start: 2337
// line end:   2355
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E714
// line start: 2363
// line end:   2379
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005E7D0
// line start: 2387
// line end:   2388
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7D8
// line start: 2416
// line end:   2433
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005E860
// line start: 2437
// line end:   2556
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005EBCC
// line start: 2563
// line end:   2612
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005ED6C
// line start: 2619
// line end:   2733
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	// register: 18
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 18
	register long dam;
	// register: 20
	register long skdam;
	// register: 4
	register int phanditype;
	// register: 3
	register int tmac;
	// register: 21
	register unsigned char rv;
	// address: 0xFFFFFFD8
	auto unsigned char ret;
}


// address: 0x8005F39C
// line start: 2740
// line end:   2803
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	// register: 20
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 17
	register long dam;
	// register: 4
	register long skdam;
	// register: 4
	register int tac;
	// register: 7
	register int blk;
	// register: 3
	register int blkper;
	// register: 21
	register unsigned char rv;
}


// address: 0x8005F74C
// line start: 2810
// line end:   2817
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005F7DC
// line start: 2825
// line end:   2896
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 5
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x8005FB68
// line start: 2904
// line end:   2925
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005FC68
// line start: 2933
// line end:   2958
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD28
// line start: 2964
// line end:   2976
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDC8
// line start: 2980
// line end:   3131
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x80
	register struct CPlayer *test;
	// register: 30
	register int OtPos;
	// register: 23
	register int ScrX;
	// register: 18
	register int ScrY;
	// register: 20
	// size: 0x68
	register struct TextDat *missdat;
	// register: 21
	register int otad;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFF8C
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4c;
	// register: 19
	register int frame;
	// register: 2
	register unsigned int rnd;
	// register: 18
	register unsigned int rot;
}


// address: 0x80060D30
// line start: 3138
// line end:   3199
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610A0
// line start: 3205
// line end:   3230
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8006119C
// line start: 3235
// line end:   3251
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x80061218
// line start: 3258
// line end:   3280
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006132C
// line start: 3287
// line end:   3288
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061334
// line start: 3295
// line end:   3598
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8006174C
// line start: 3610
// line end:   3618
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800617B4
// line start: 3625
// line end:   3663
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 7
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x80061C90
// line start: 3710
// line end:   3727
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061D2C
// line start: 3736
// line end:   3862
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 19
	register int pnum;
	// register: 23
	register int tplayer;
	{
		{
			{
				// register: 17
				// size: 0x22D0
				register struct PlayerStruct *ptrplr;
			}
		}
	}
}


// address: 0x80062160
// line start: 3868
// line end:   3871
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062188
// line start: 3879
// line end:   3903
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
}


// address: 0x8006239C
// line start: 3910
// line end:   3960
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x800623AC
// line start: 3966
// line end:   4058
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 16
	register int pnum;
	// register: 5
	register unsigned char addflag;
	// register: 4
	register int rspell;
}


// address: 0x80062A18
// line start: 4125
// line end:   4149
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x80062B54
// line start: 4153
// line end:   4158
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062B84
// line start: 4175
// line end:   4209
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x80062DBC
// line start: 4216
// line end:   4227
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80062F3C
// line start: 4235
// line end:   4251
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8006309C
// line start: 4259
// line end:   4268
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x800631CC
// line start: 4276
// line end:   4289
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80063314
// line start: 4297
// line end:   4302
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80063358
// line start: 4309
// line end:   4317
void SetPlrStr__Fii(int p, int v) {
}


// address: 0x80063474
// line start: 4324
// line end:   4332
void SetPlrMag__Fii(int p, int v) {
}


// address: 0x800634F8
// line start: 4339
// line end:   4347
void SetPlrDex__Fii(int p, int v) {
}


// address: 0x80063614
// line start: 4354
// line end:   4362
void SetPlrVit__Fii(int p, int v) {
}


// address: 0x80063694
// line start: 4369
// line end:   4372
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006369C
// line start: 4379
// line end:   4445
void PlayDungMsgs__Fv() {
}


// address: 0x80063C34
// line start: 4448
// line end:   4448
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063C5C
// line start: 4449
// line end:   4449
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80063CA0
// line start: 4450
// line end:   4450
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063CD4
// line start: 4451
// line end:   4451
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063D08
// line start: 4452
// line end:   4452
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063D3C
// line start: 4453
// line end:   4453
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80063D70
// line start: 4454
// line end:   4454
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80063DA4
// line start: 4455
// line end:   4455
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80063DDC
// line start: 4456
// line end:   4456
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063E10
// line start: 4457
// line end:   4457
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E38
// line start: 4458
// line end:   4458
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E60
// line start: 4459
// line end:   4459
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063E88
// line start: 4460
// line end:   4460
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80063ED0
// line start: 4461
// line end:   4461
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063EF8
// line start: 4462
// line end:   4462
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F20
// line start: 4463
// line end:   4463
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80063F54
// line start: 4464
// line end:   4464
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F7C
// line start: 4465
// line end:   4465
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063F9C
// line start: 4466
// line end:   4466
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80063FE0
// line start: 4467
// line end:   4467
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80064014
// line start: 4468
// line end:   4468
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80064048
// line start: 4470
// line end:   4470
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80064094
// line start: 4471
// line end:   4471
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800640E0
// line start: 4472
// line end:   4472
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8006412C
// line start: 4473
// line end:   4473
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80064180
// line start: 4474
// line end:   4474
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800641CC
// line start: 4475
// line end:   4475
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80064218
// line start: 4476
// line end:   4476
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80064268
// line start: 4477
// line end:   4477
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x800642B4
// line start: 4478
// line end:   4478
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80064300
// line start: 4479
// line end:   4479
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x8006434C
// line start: 4480
// line end:   4480
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80064398
// line start: 4481
// line end:   4481
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x800643E4
// line start: 4482
// line end:   4482
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80064430
// line start: 4483
// line end:   4483
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80064480
// line start: 4484
// line end:   4484
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x800644CC
// line start: 4485
// line end:   4485
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x80064518
// line start: 4486
// line end:   4486
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80064568
// line start: 4488
// line end:   4488
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x800645B4
// line start: 4489
// line end:   4489
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80064600
// line start: 4490
// line end:   4490
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8006464C
// line start: 4491
// line end:   4491
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80064698
// line start: 4492
// line end:   4492
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800646E4
// line start: 4493
// line end:   4493
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80064730
// line start: 4494
// line end:   4494
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8006477C
// line start: 4495
// line end:   4495
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800647C8
// line start: 4496
// line end:   4496
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80064814
// line start: 4497
// line end:   4497
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80064860
// line start: 4498
// line end:   4498
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800648AC
// line start: 4506
// line end:   4507
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


