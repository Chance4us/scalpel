// C:\diabpsx\SOURCE\MSG.CPP

#include "types.h"

// address: 0x800477B4
// line start: 171
// line end:   176
void delta_init__Fv() {
}


// address: 0x80047814
// line start: 183
// line end:   204
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x800478B0
// line start: 211
// line end:   227
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047934
// line start: 262
// line end:   284
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x800479C4
// line start: 290
// line end:   331
void delta_leave_sync__FUc(unsigned char bLevel) {
	// register: 20
	// size: 0xF1C
	register struct DLevel *Dl;
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0x6
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x80047CF0
// line start: 337
// line end:   353
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80047D50
// line start: 360
// line end:   479
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 15
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x80047F14
// line start: 486
// line end:   547
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 9
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x8004809C
// line start: 553
// line end:   556
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x800480C0
// line start: 562
// line end:   565
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x800480E4
// line start: 572
// line end:   635
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 10
	// size: 0x14
	register struct TCmdPItem *OpD;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 8
	register int i;
}


// address: 0x800482F8
// line start: 640
// line end:   647
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x80048328
// line start: 653
// line end:   660
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004835C
// line start: 665
// line end:   680
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048448
// line start: 755
// line end:   759
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048470
// line start: 765
// line end:   779
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x800484BC
// line start: 785
// line end:   795
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800484EC
// line start: 801
// line end:   810
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048524
// line start: 816
// line end:   826
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048564
// line start: 832
// line end:   843
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x800485AC
// line start: 849
// line end:   854
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800485D8
// line start: 860
// line end:   866
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x80048608
// line start: 871
// line end:   878
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048640
// line start: 883
// line end:   891
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x800486B4
// line start: 896
// line end:   942
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800487E8
// line start: 948
// line end:   963
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048864
// line start: 979
// line end:   998
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x800488BC
// line start: 1005
// line end:   1012
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048924
// line start: 1017
// line end:   1060
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048A24
// line start: 1066
// line end:   1077
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048AC0
// line start: 1083
// line end:   1088
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048AF0
// line start: 1094
// line end:   1136
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048C04
// line start: 1141
// line end:   1157
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80048C0C
// line start: 1163
// line end:   1171
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80048C40
// line start: 1186
// line end:   1197
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x80048C9C
// line start: 1203
// line end:   1206
void delta_close_portal__Fi(int pnum) {
}


// address: 0x80048CDC
// line start: 1212
// line end:   1221
void check_update_plr__Fi(int pnum) {
}


// address: 0x80048CE4
// line start: 1232
// line end:   1239
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048D80
// line start: 1248
// line end:   1262
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DB0
// line start: 1267
// line end:   1276
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048DE0
// line start: 1280
// line end:   1293
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E10
// line start: 1299
// line end:   1312
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048E40
// line start: 1318
// line end:   1324
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80048EAC
// line start: 1333
// line end:   1339
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80048F48
// line start: 1346
// line end:   1379
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x80049080
// line start: 1389
// line end:   1426
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	// register: 21
	register int nIndex;
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
											// register: 5
											register int hitem;
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


// address: 0x80049248
// line start: 1435
// line end:   1441
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800492E4
// line start: 1448
// line end:   1482
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049410
// line start: 1491
// line end:   1534
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
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
											// register: 5
											register int hitem;
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


// address: 0x800495D0
// line start: 1542
// line end:   1555
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049664
// line start: 1562
// line end:   1593
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x800497FC
// line start: 1602
// line end:   1628
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049930
// line start: 1637
// line end:   1647
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x80049A38
// line start: 1654
// line end:   1662
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049ADC
// line start: 1669
// line end:   1685
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049BDC
// line start: 1693
// line end:   1708
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049CCC
// line start: 1715
// line end:   1730
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049DC0
// line start: 1737
// line end:   1748
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049EDC
// line start: 1755
// line end:   1766
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x80049FF8
// line start: 1774
// line end:   1780
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A058
// line start: 1787
// line end:   1799
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 19
			// size: 0x4
			register struct TCmdParam1 *p;
			// register: 16
			register int dx;
			// register: 2
			register int dy;
		}
	}
}


// address: 0x8004A19C
// line start: 1806
// line end:   1820
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A27C
// line start: 1827
// line end:   1838
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A354
// line start: 1846
// line end:   1856
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A430
// line start: 1863
// line end:   1874
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A50C
// line start: 1881
// line end:   1887
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A594
// line start: 1894
// line end:   1898
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A5CC
// line start: 1904
// line end:   1908
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A634
// line start: 1915
// line end:   1922
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A6D0
// line start: 1930
// line end:   1934
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A708
// line start: 1941
// line end:   1950
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004A7DC
// line start: 1958
// line end:   1964
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A840
// line start: 1971
// line end:   1977
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A8A4
// line start: 1984
// line end:   2004
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
					// register: 6
					register unsigned char addok;
					{
						// register: 5
						register int i;
						{
							// register: 2
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004AA08
// line start: 2013
// line end:   2033
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB04
// line start: 2043
// line end:   2050
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB4C
// line start: 2057
// line end:   2104
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ACF0
// line start: 2113
// line end:   2119
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AD80
// line start: 2126
// line end:   2132
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AE10
// line start: 2139
// line end:   2145
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AEA0
// line start: 2152
// line end:   2158
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AF2C
// line start: 2164
// line end:   2169
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFB8
// line start: 2175
// line end:   2182
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFC0
// line start: 2188
// line end:   2191
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFC8
// line start: 2196
// line end:   2202
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AFD0
// line start: 2207
// line end:   2212
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B020
// line start: 2218
// line end:   2266
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B29C
// line start: 2274
// line end:   2306
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0xA
	register struct TCmdLocParam3 *p;
	{
		{
			{
				{
					{
						{
							// register: 4
							register int i;
							// register: 2
							register int mi;
							// register: 6
							register unsigned char addok;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004B424
// line start: 2312
// line end:   2317
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B474
// line start: 2323
// line end:   2330
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4BC
// line start: 2336
// line end:   2344
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B4FC
// line start: 2349
// line end:   2357
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B53C
// line start: 2363
// line end:   2371
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B57C
// line start: 2377
// line end:   2386
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B5BC
// line start: 2391
// line end:   2398
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B604
// line start: 2405
// line end:   2417
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 16
					register int mi;
				}
			}
		}
	}
}


// address: 0x8004B718
// line start: 2457
// line end:   2559
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8011652C
	static unsigned char sbLastCmd;
}


// address: 0x8004BB38
// size: 0xF1C
// line start: 2568
// line end:   2576
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004BBC8
// line start: 2580
// line end:   2582
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


