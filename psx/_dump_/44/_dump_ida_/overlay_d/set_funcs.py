del_items(0x8014A990)
SetType(0x8014A990, "void EA_cd_seek(int secnum)")
del_items(0x8014A998)
SetType(0x8014A998, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x8014A9CC)
SetType(0x8014A9CC, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014A9DC)
SetType(0x8014A9DC, "void flush_cdstream()")
del_items(0x8014AA00)
SetType(0x8014AA00, "int check_complete_frame(struct strheader *h)")
del_items(0x8014AA80)
SetType(0x8014AA80, "void reset_cdstream()")
del_items(0x8014AAA8)
SetType(0x8014AAA8, "void kill_stream_handlers()")
del_items(0x8014AB08)
SetType(0x8014AB08, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x8014ACFC)
SetType(0x8014ACFC, "void CD_stream_handler(struct TASK *T)")
del_items(0x8014ADDC)
SetType(0x8014ADDC, "void install_stream_handlers()")
del_items(0x8014AE4C)
SetType(0x8014AE4C, "void cdstream_service()")
del_items(0x8014AEE4)
SetType(0x8014AEE4, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x8014B008)
SetType(0x8014B008, "int cdstream_is_last_chunk()")
del_items(0x8014B020)
SetType(0x8014B020, "void cdstream_discard_chunk()")
del_items(0x8014B120)
SetType(0x8014B120, "void close_cdstream()")
del_items(0x8014B198)
SetType(0x8014B198, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x8014B330)
SetType(0x8014B330, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8014B364)
SetType(0x8014B364, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014B4E8)
SetType(0x8014B4E8, "void DCT_out_handler()")
del_items(0x8014B584)
SetType(0x8014B584, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014B5F4)
SetType(0x8014B5F4, "void init_mdec_buffer(char *buf, int size)")
del_items(0x8014B610)
SetType(0x8014B610, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x8014BA00)
SetType(0x8014BA00, "void rebuild_mdec_polys(int x, int y)")
del_items(0x8014BBD4)
SetType(0x8014BBD4, "void clear_mdec_frame()")
del_items(0x8014BBE0)
SetType(0x8014BBE0, "void draw_mdec_polys()")
del_items(0x8014BF2C)
SetType(0x8014BF2C, "void invalidate_mdec_frame()")
del_items(0x8014BF40)
SetType(0x8014BF40, "int is_frame_decoded()")
del_items(0x8014BF4C)
SetType(0x8014BF4C, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014C2DC)
SetType(0x8014C2DC, "void set_mdec_poly_bright(int br)")
del_items(0x8014C344)
SetType(0x8014C344, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8014C394)
SetType(0x8014C394, "void init_mdec_audio(int rate)")
del_items(0x8014C44C)
SetType(0x8014C44C, "void kill_mdec_audio()")
del_items(0x8014C47C)
SetType(0x8014C47C, "void stop_mdec_audio()")
del_items(0x8014C4A0)
SetType(0x8014C4A0, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x8014C73C)
SetType(0x8014C73C, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x8014C808)
SetType(0x8014C808, "void resync_audio()")
del_items(0x8014C838)
SetType(0x8014C838, "void stop_mdec_stream()")
del_items(0x8014C884)
SetType(0x8014C884, "void dequeue_stream()")
del_items(0x8014C970)
SetType(0x8014C970, "void dequeue_animation()")
del_items(0x8014CB20)
SetType(0x8014CB20, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x8014CD0C)
SetType(0x8014CD0C, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x8014CDC0)
SetType(0x8014CDC0, "void clear_mdec_queue()")
del_items(0x8014CDEC)
SetType(0x8014CDEC, "void StrClearVRAM()")
del_items(0x8014CEAC)
SetType(0x8014CEAC, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014D2B4)
SetType(0x8014D2B4, "unsigned short GetDown__C4CPad(struct CPad *this)")
