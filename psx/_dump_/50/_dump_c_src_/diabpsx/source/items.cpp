// C:\diabpsx\SOURCE\ITEMS.CPP

#include "types.h"

// address: 0x8003CDB8
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003CDE4
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003CEAC
// line start: 539
// line end:   576
void AddInitItems__Fv() {
	// register: 22
	register int j;
	{
		// register: 20
		register int i;
		{
			// register: 19
			register int ii;
			// register: 18
			register int xx;
			// register: 17
			register int yy;
		}
	}
}


// address: 0x8003D0C4
// line start: 583
// line end:   630
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003D29C
// line start: 637
// line end:   895
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 11
	register int mind;
	// register: 10
	register int maxd;
	// register: 15
	register int tac;
	// register: 5
	register int g;
	// address: 0xFFFFFFD0
	auto int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF60
	auto int bac;
	// address: 0xFFFFFF68
	auto int sadd;
	// register: 19
	register int madd;
	// address: 0xFFFFFF70
	auto int dadd;
	// register: 18
	register int vadd;
	// register: 23
	register int fr;
	// register: 30
	register int lr;
	// register: 22
	register int mr;
	// register: 13
	register int dmod;
	// register: 14
	register int ghit;
	// register: 17
	register int lrad;
	// address: 0xFFFFFF78
	auto int ihp;
	// address: 0xFFFFFF80
	auto int imana;
	// address: 0xFFFFFF88
	auto int spllvladd;
	// address: 0xFFFFFF90
	auto int enac;
	// address: 0xFFFFFF98
	auto int fmin;
	// address: 0xFFFFFFA0
	auto int fmax;
	// address: 0xFFFFFFA8
	auto int lmin;
	// address: 0xFFFFFFB0
	auto int lmax;
	// address: 0xFFFFFFB8
	auto long iflgs;
	// register: 20
	register unsigned long spl;
	// register: 6
	register unsigned long t;
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
		}
	}
}


// address: 0x8003DD70
// line start: 900
// line end:   930
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003E0F0
// line start: 939
// line end:   947
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003E18C
// line start: 951
// line end:   991
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 5
	register unsigned char sf;
	// register: 11
	register unsigned char changeflag;
	// register: 10
	register int sa;
	// register: 9
	register int ma;
	// register: 8
	register int da;
}


// address: 0x8003E2EC
// line start: 997
// line end:   1001
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003E338
// line start: 1007
// line end:   1022
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8003E418
// line start: 1028
// line end:   1051
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003E6AC
// line start: 1056
// line end:   1066
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003E770
// line start: 1072
// line end:   1103
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003E888
// line start: 1109
// line end:   1110
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E8B4
// line start: 1116
// line end:   1132
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003EA30
// line start: 1138
// line end:   1139
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003EA38
// line start: 1145
// line end:   1150
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003EA68
// line start: 1156
// line end:   1267
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003EEA4
// line start: 1274
// line end:   1303
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003F17C
// line start: 1311
// line end:   1359
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 5
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 16
	register unsigned char savail;
}


// address: 0x8003F3A8
// line start: 1366
// line end:   1389
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	{
		// register: 19
		register int l;
		{
			{
				// register: 21
				register int j;
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003F510
// line start: 1395
// line end:   1407
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
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


// address: 0x8003F5D8
// line start: 1413
// line end:   1419
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003F690
// line start: 1426
// line end:   1471
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003F8F8
// line start: 1478
// line end:   1538
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	// address: 0xFFFFFB68
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 6
	register int j;
	// register: 17
	register int preidx;
	// address: 0xFFFFFF68
	// size: 0x80
	auto char istr[128];
	// register: 2
	register unsigned char addok;
}


// address: 0x8003FAE8
// line start: 1546
// line end:   1614
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int l;
	// register: 19
	register int bs;
	// register: 5
	register int maxc;
	// register: 17
	register int minc;
	{
		{
			// register: 8
			register int v;
		}
	}
}


// address: 0x8003FD9C
// line start: 1655
// line end:   1745
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x800402E8
// line start: 1754
// line end:   1755
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80040320
// line start: 1762
// line end:   1765
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x80040394
// line start: 1772
// line end:   2054
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x80041AC0
// line start: 2062
// line end:   2160
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	// register: 16
	register int pre;
	// register: 23
	register int post;
	// address: 0xFFFFFB48
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 7
	register int j;
	// register: 20
	register int preidx;
	// register: 30
	register int sufidx;
	// address: 0xFFFFFF48
	// size: 0x80
	auto char istr[128];
	// register: 21
	register unsigned char goe;
}


// address: 0x80041F28
// line start: 2167
// line end:   2197
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80042024
// line start: 2203
// line end:   2230
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8004212C
// line start: 2239
// line end:   2275
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80042370
// line start: 2283
// line end:   2314
int RndUItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x800425B0
// line start: 2322
// line end:   2345
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80042724
// line start: 2353
// line end:   2368
int RndTypeItems__Fii(int itype, int imid) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 9
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80042824
// line start: 2375
// line end:   2409
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	// register: 4
	register int j;
	// register: 2
	register int idata;
	// address: 0xFFFFFF68
	// size: 0x80
	auto unsigned char uok[128];
	// register: 16
	register int numu;
}


// address: 0x800429D4
// line start: 2416
// line end:   2438
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80042C7C
// line start: 2445
// line end:   2463
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80042DB4
// line start: 2474
// line end:   2478
void ItemRndDur__Fi(int ii) {
}


// address: 0x80042E44
// line start: 2485
// line end:   2523
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80043150
// line start: 2531
// line end:   2574
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80043398
// line start: 2582
// line end:   2596
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800434C8
// line start: 2606
// line end:   2621
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80043610
// line start: 2633
// line end:   2643
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800436E8
// line start: 2647
// line end:   2657
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x800437A8
// line start: 2666
// line end:   2681
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800438EC
// line start: 2693
// line end:   2717
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80043AD8
// line start: 2724
// line end:   2763
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 18
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 21
			register int tries;
		}
	}
}


// address: 0x80043D4C
// line start: 2770
// line end:   2795
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 2
	register int yy;
	// register: 4
	register unsigned char done;
}


// address: 0x80043F0C
// line start: 2804
// line end:   2836
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800440C4
// line start: 2843
// line end:   2847
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80044118
// line start: 2857
// line end:   2872
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800441E0
// line start: 2887
// line end:   2934
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 5
	register int ii;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 2
									register int it;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800443E8
// line start: 2941
// line end:   2946
void FreeItemGFX__Fv() {
}


// address: 0x800443F0
// line start: 2965
// line end:   2990
void GetItemStr__Fi(int i) {
	{
		{
			{
				// register: 17
				register int nGold;
			}
		}
	}
}


// address: 0x80044598
// line start: 2996
// line end:   3006
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80044688
// line start: 3011
// line end:   3035
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80044758
// line start: 3039
// line end:   3052
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8004481C
// line start: 3057
// line end:   3070
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x8004488C
// line start: 3074
// line end:   3092
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x8004498C
// line start: 3197
// line end:   3321
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80044A80
// line start: 3327
// line end:   3540
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x8004513C
// line start: 3584
// line end:   3612
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x80045144
// line start: 3625
// line end:   3668
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800452D0
// line start: 3675
// line end:   3720
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80045640
// line start: 3726
// line end:   3766
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80045950
// line start: 3773
// line end:   3776
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80045968
// line start: 3784
// line end:   3974
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80045F80
// line start: 3984
// line end:   3989
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80046014
// line start: 4008
// line end:   4023
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80046090
// line start: 4029
// line end:   4048
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80046198
// line start: 4056
// line end:   4081
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x800463B8
// line start: 4090
// line end:   4109
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x800465FC
// line start: 4122
// line end:   4137
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x8004674C
// line start: 4168
// line end:   4172
void SpawnStoreGold__Fv() {
}


// address: 0x800467D0
// line start: 4221
// line end:   4232
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80046970
// line start: 4244
// line end:   4252
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x800469D4
// line start: 4271
// line end:   4293
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80046B64
// line start: 4301
// line end:   4322
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046CE0
// line start: 4330
// line end:   4351
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046E5C
// line start: 4490
// line end:   4531
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80046FD0
// line start: 4685
// line end:   4789
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 16
	register int PreIdx;
	// register: 3
	register int SufIdx;
}


