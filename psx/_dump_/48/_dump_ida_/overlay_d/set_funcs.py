del_items(0x80123B68)
SetType(0x80123B68, "void EA_cd_seek(int secnum)")
del_items(0x80123B70)
SetType(0x80123B70, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x80123BA4)
SetType(0x80123BA4, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x80123BB4)
SetType(0x80123BB4, "void flush_cdstream()")
del_items(0x80123BD8)
SetType(0x80123BD8, "int check_complete_frame(struct strheader *h)")
del_items(0x80123C58)
SetType(0x80123C58, "void reset_cdstream()")
del_items(0x80123C80)
SetType(0x80123C80, "void kill_stream_handlers()")
del_items(0x80123CF0)
SetType(0x80123CF0, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x80123ED0)
SetType(0x80123ED0, "void CD_stream_handler(struct TASK *T)")
del_items(0x80123FC4)
SetType(0x80123FC4, "void install_stream_handlers()")
del_items(0x80124034)
SetType(0x80124034, "void cdstream_service()")
del_items(0x801240CC)
SetType(0x801240CC, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x801241EC)
SetType(0x801241EC, "int cdstream_is_last_chunk()")
del_items(0x80124204)
SetType(0x80124204, "void cdstream_discard_chunk()")
del_items(0x80124304)
SetType(0x80124304, "void close_cdstream()")
del_items(0x80124398)
SetType(0x80124398, "void wait_cdstream()")
del_items(0x80124450)
SetType(0x80124450, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x801245BC)
SetType(0x801245BC, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x801245F0)
SetType(0x801245F0, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x80124774)
SetType(0x80124774, "void DCT_out_handler()")
del_items(0x80124810)
SetType(0x80124810, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x80124874)
SetType(0x80124874, "void init_mdec_buffer(char *buf, int size)")
del_items(0x80124890)
SetType(0x80124890, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x80124C14)
SetType(0x80124C14, "void rebuild_mdec_polys(int x, int y)")
del_items(0x80124DE8)
SetType(0x80124DE8, "void clear_mdec_frame()")
del_items(0x80124DF4)
SetType(0x80124DF4, "void draw_mdec_polys()")
del_items(0x80125144)
SetType(0x80125144, "void invalidate_mdec_frame()")
del_items(0x80125158)
SetType(0x80125158, "int is_frame_decoded()")
del_items(0x80125164)
SetType(0x80125164, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x801255B4)
SetType(0x801255B4, "void set_mdec_poly_bright(int br)")
del_items(0x8012561C)
SetType(0x8012561C, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8012566C)
SetType(0x8012566C, "void init_mdec_audio(int rate)")
del_items(0x80125724)
SetType(0x80125724, "void kill_mdec_audio()")
del_items(0x80125754)
SetType(0x80125754, "void stop_mdec_audio()")
del_items(0x80125778)
SetType(0x80125778, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x80125A14)
SetType(0x80125A14, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x80125AE0)
SetType(0x80125AE0, "void resync_audio()")
del_items(0x80125B10)
SetType(0x80125B10, "void stop_mdec_stream()")
del_items(0x80125B5C)
SetType(0x80125B5C, "void dequeue_stream()")
del_items(0x80125C48)
SetType(0x80125C48, "void dequeue_animation()")
del_items(0x80125DF8)
SetType(0x80125DF8, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x80125FE4)
SetType(0x80125FE4, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x80126098)
SetType(0x80126098, "void clear_mdec_queue()")
del_items(0x801260C4)
SetType(0x801260C4, "void StrClearVRAM()")
del_items(0x80126128)
SetType(0x80126128, "short PlayFMVOverLay(char *filename, int w, int h)")