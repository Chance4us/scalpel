del_items(0x8014B488)
SetType(0x8014B488, "void EA_cd_seek(int secnum)")
del_items(0x8014B490)
SetType(0x8014B490, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x8014B4C4)
SetType(0x8014B4C4, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014B4D4)
SetType(0x8014B4D4, "void flush_cdstream()")
del_items(0x8014B4F8)
SetType(0x8014B4F8, "int check_complete_frame(struct strheader *h)")
del_items(0x8014B578)
SetType(0x8014B578, "void reset_cdstream()")
del_items(0x8014B5A0)
SetType(0x8014B5A0, "void kill_stream_handlers()")
del_items(0x8014B600)
SetType(0x8014B600, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x8014B7F4)
SetType(0x8014B7F4, "void CD_stream_handler(struct TASK *T)")
del_items(0x8014B8F4)
SetType(0x8014B8F4, "void install_stream_handlers()")
del_items(0x8014B964)
SetType(0x8014B964, "void cdstream_service()")
del_items(0x8014B9FC)
SetType(0x8014B9FC, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x8014BB20)
SetType(0x8014BB20, "int cdstream_is_last_chunk()")
del_items(0x8014BB38)
SetType(0x8014BB38, "void cdstream_discard_chunk()")
del_items(0x8014BC38)
SetType(0x8014BC38, "void close_cdstream()")
del_items(0x8014BCB0)
SetType(0x8014BCB0, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x8014BE48)
SetType(0x8014BE48, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8014BE7C)
SetType(0x8014BE7C, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014C000)
SetType(0x8014C000, "void DCT_out_handler()")
del_items(0x8014C09C)
SetType(0x8014C09C, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014C10C)
SetType(0x8014C10C, "void init_mdec_buffer(char *buf, int size)")
del_items(0x8014C128)
SetType(0x8014C128, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x8014C518)
SetType(0x8014C518, "void rebuild_mdec_polys(int x, int y)")
del_items(0x8014C6EC)
SetType(0x8014C6EC, "void clear_mdec_frame()")
del_items(0x8014C6F8)
SetType(0x8014C6F8, "void draw_mdec_polys()")
del_items(0x8014CA44)
SetType(0x8014CA44, "void invalidate_mdec_frame()")
del_items(0x8014CA58)
SetType(0x8014CA58, "int is_frame_decoded()")
del_items(0x8014CA64)
SetType(0x8014CA64, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014CDF4)
SetType(0x8014CDF4, "void set_mdec_poly_bright(int br)")
del_items(0x8014CE5C)
SetType(0x8014CE5C, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8014CEAC)
SetType(0x8014CEAC, "void init_mdec_audio(int rate)")
del_items(0x8014CFB0)
SetType(0x8014CFB0, "void kill_mdec_audio()")
del_items(0x8014CFE0)
SetType(0x8014CFE0, "void stop_mdec_audio()")
del_items(0x8014D004)
SetType(0x8014D004, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x8014D278)
SetType(0x8014D278, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x8014D344)
SetType(0x8014D344, "void resync_audio()")
del_items(0x8014D370)
SetType(0x8014D370, "void stop_mdec_stream()")
del_items(0x8014D3BC)
SetType(0x8014D3BC, "void dequeue_stream()")
del_items(0x8014D4A8)
SetType(0x8014D4A8, "void dequeue_animation()")
del_items(0x8014D658)
SetType(0x8014D658, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x8014D844)
SetType(0x8014D844, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x8014D8F8)
SetType(0x8014D8F8, "void clear_mdec_queue()")
del_items(0x8014D924)
SetType(0x8014D924, "void StrClearVRAM()")
del_items(0x8014D9E4)
SetType(0x8014D9E4, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014DDEC)
SetType(0x8014DDEC, "unsigned short GetDown__C4CPad(struct CPad *this)")
