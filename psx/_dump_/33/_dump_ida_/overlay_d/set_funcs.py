del_items(0x8014B0D8)
SetType(0x8014B0D8, "void EA_cd_seek(int secnum)")
del_items(0x8014B0E0)
SetType(0x8014B0E0, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x8014B114)
SetType(0x8014B114, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014B124)
SetType(0x8014B124, "void flush_cdstream()")
del_items(0x8014B148)
SetType(0x8014B148, "int check_complete_frame(struct strheader *h)")
del_items(0x8014B1C8)
SetType(0x8014B1C8, "void reset_cdstream()")
del_items(0x8014B1F0)
SetType(0x8014B1F0, "void kill_stream_handlers()")
del_items(0x8014B250)
SetType(0x8014B250, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x8014B444)
SetType(0x8014B444, "void CD_stream_handler(struct TASK *T)")
del_items(0x8014B524)
SetType(0x8014B524, "void install_stream_handlers()")
del_items(0x8014B594)
SetType(0x8014B594, "void cdstream_service()")
del_items(0x8014B62C)
SetType(0x8014B62C, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x8014B750)
SetType(0x8014B750, "int cdstream_is_last_chunk()")
del_items(0x8014B768)
SetType(0x8014B768, "void cdstream_discard_chunk()")
del_items(0x8014B868)
SetType(0x8014B868, "void close_cdstream()")
del_items(0x8014B8E0)
SetType(0x8014B8E0, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x8014BA78)
SetType(0x8014BA78, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8014BAAC)
SetType(0x8014BAAC, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014BC30)
SetType(0x8014BC30, "void DCT_out_handler()")
del_items(0x8014BCCC)
SetType(0x8014BCCC, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014BD3C)
SetType(0x8014BD3C, "void init_mdec_buffer(char *buf, int size)")
del_items(0x8014BD58)
SetType(0x8014BD58, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x8014C148)
SetType(0x8014C148, "void rebuild_mdec_polys(int x, int y)")
del_items(0x8014C31C)
SetType(0x8014C31C, "void clear_mdec_frame()")
del_items(0x8014C328)
SetType(0x8014C328, "void draw_mdec_polys()")
del_items(0x8014C674)
SetType(0x8014C674, "void invalidate_mdec_frame()")
del_items(0x8014C688)
SetType(0x8014C688, "int is_frame_decoded()")
del_items(0x8014C694)
SetType(0x8014C694, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014CA24)
SetType(0x8014CA24, "void set_mdec_poly_bright(int br)")
del_items(0x8014CA8C)
SetType(0x8014CA8C, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8014CADC)
SetType(0x8014CADC, "void init_mdec_audio(int rate)")
del_items(0x8014CB94)
SetType(0x8014CB94, "void kill_mdec_audio()")
del_items(0x8014CBC4)
SetType(0x8014CBC4, "void stop_mdec_audio()")
del_items(0x8014CBE8)
SetType(0x8014CBE8, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x8014CE84)
SetType(0x8014CE84, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x8014CF50)
SetType(0x8014CF50, "void resync_audio()")
del_items(0x8014CF80)
SetType(0x8014CF80, "void stop_mdec_stream()")
del_items(0x8014CFCC)
SetType(0x8014CFCC, "void dequeue_stream()")
del_items(0x8014D0B8)
SetType(0x8014D0B8, "void dequeue_animation()")
del_items(0x8014D268)
SetType(0x8014D268, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x8014D454)
SetType(0x8014D454, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x8014D508)
SetType(0x8014D508, "void clear_mdec_queue()")
del_items(0x8014D534)
SetType(0x8014D534, "void StrClearVRAM()")
del_items(0x8014D5F4)
SetType(0x8014D5F4, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014D9FC)
SetType(0x8014D9FC, "unsigned short GetDown__C4CPad(struct CPad *this)")
