/*
**********************************************************************************************************************
														 ePDK
										 the Easy Portable/Player Develop Kits
*												 RES Compiler Sub-System
*
* 												(c) Copyright 2007-2010 
* 												 All Rights Reserved
*
* Moudle	: language compiler
* File		: lang.h
*
* By		: 
* Version	: v1.00
* Date		: 2016-10-7
**********************************************************************************************************************
*/


#ifndef __LANG__H__
#define __LANG__H__

// LangId 
#define	LANG_CHINESES_TYPE		0x410
#define	LANG_ENGLISH_TYPE		0x400
#define	LANG_PORTUGUESE_TYPE		0x490
#define	LANG_SPANISH_TYPE		0x460

// StringID 
#define 	 STRING_USB_CONNECTING		0x01
#define 	 STRING_POWER_OFF		0x02
#define 	 STRING_UPDATE_ORCHID		0x03
#define 	 STRING_LOW_POWER		0x04
#define 	 STRING_FW_UPDATE		0x05
#define 	 STRING_ADJUST_FINISH		0x06
#define 	 STRING_FM		0x07
#define 	 STRING_NO_DISK		0x08
#define 	 STRING_INSERT_DISK		0x09
#define 	 STRING_TF_CARD		0x0a
#define 	 STRING_USB_DISK		0x0b
#define 	 STRING_LINEIN		0x0c
#define 	 STRING_NO_MEDIAFILE		0x0d
#define 	 STRING_MICIN		0x0e
#define 	 STRING_MICINSERT		0x0f
#define 	 STRING_MUSIC_LEFT		0x10
#define 	 STRING_MUSIC_RIGHT		0x11
#define 	 STRING_MUSIC_STEREO		0x12
#define 	 STRING_MAINMENU_FM		0x3e9
#define 	 STRING_MAINMENU_MOVIE		0x3ea
#define 	 STRING_MAINMENU_PHOTO		0x3eb
#define 	 STRING_MAINMENU_MUSIC		0x3ec
#define 	 STRING_MAINMENU_SETTING		0x3ed
#define 	 STRING_MAINMENU_EXPLORER		0x3ee
#define 	 STRING_MAINMENU_EBOOK		0x3ef
#define 	 STRING_MAINMENU_TV		0x3f0
#define 	 STRING_EXPLR_EXPLORER		0x7d1
#define 	 STRING_EXPLR_MOVIE		0x7d2
#define 	 STRING_EXPLR_EBOOK		0x7d3
#define 	 STRING_EXPLR_SD		0x7d4
#define 	 STRING_EXPLR_USB		0x7d5
#define 	 STRING_EXPLR_TYPE		0x7d6
#define 	 STRING_EXPLR_FOLDER		0x7d7
#define 	 STRING_EXPLR_DATE		0x7d8
#define 	 STRING_EXPLR_SPACE		0x7d9
#define 	 STRING_EXPLR_RESOLUTION		0x7da
#define 	 STRING_EXPLR_BACKTOUP		0x7db
#define 	 STRING_EXPLR_TEST		0x7dc
#define 	 STRING_EXPLR_DELETE_CONFIRM		0x7dd
#define 	 STRING_EXPLR_TIME_YEAR		0x7de
#define 	 STRING_EXPLR_TIME_MONTH		0x7df
#define 	 STRING_EXPLR_TIME_DAY		0x7e0
#define 	 STRING_EXPLR_TIME_HOUR		0x7e1
#define 	 STRING_EXPLR_TIME_MINUTE		0x7e2
#define 	 STRING_EXPLR_TIME_SECOND		0x7e3
#define 	 STRING_EXPLR_MANAGER_TITLE		0x7e4
#define 	 STRING_EXPLR_DELETE_HINT		0x7e5
#define 	 STRING_EXPLR_DELETE_FAILED		0x7e6
#define 	 STRING_EXPLR_FW_UPDATE_CONFIRM		0x7e7
#define 	 STRING_MOVIE_PREV		0xbb9
#define 	 STRING_MOVIE_NEXT		0xbba
#define 	 STRING_MOVIE_PLAY		0xbbb
#define 	 STRING_MOVIE_RR		0xbbc
#define 	 STRING_MOVIE_FF		0xbbd
#define 	 STRING_MOVIE_JUMP		0xbbe
#define 	 STRING_MOVIE_PLAYMODE		0xbbf
#define 	 STRING_MOVIE_SCREENRATE		0xbc0
#define 	 STRING_MOVIE_BRIGHT		0xbc1
#define 	 STRING_MOVIE_REPEATALL		0xbc2
#define 	 STRING_MOVIE_REPEATONE		0xbc3
#define 	 STRING_MOVIE_PLAYALL		0xbc4
#define 	 STRING_MOVIE_NONE		0xbc5
#define 	 STRING_MOVIE_AUTO		0xbc6
#define 	 STRING_MOVIE_CUT		0xbc7
#define 	 STRING_MOVIE_STRECTCH		0xbc8
#define 	 STRING_MOVIE_ORIGINAL		0xbc9
#define 	 STRING_MOVIE_ACTUAL		0xbca
#define 	 STRING_MOVIE_VIDEO_INFO		0xbcb
#define 	 STRING_MOVIE_AUDIO_INFO		0xbcc
#define 	 STRING_MOVIE_FILE_INFO		0xbcd
#define 	 STRING_MOVIE_SUB_STATE		0xbce
#define 	 STRING_MOVIE_SUB_SIZE		0xbcf
#define 	 STRING_MOVIE_SUB_COLOR		0xbd0
#define 	 STRING_MOVIE_SUB_POS		0xbd1
#define 	 STRING_MOVIE_SUB_ON		0xbd2
#define 	 STRING_MOVIE_SUB_OFF		0xbd3
#define 	 STRING_MOVIE_SUB_WHITE		0xbd4
#define 	 STRING_MOVIE_SUB_RED		0xbd5
#define 	 STRING_MOVIE_SUB_BLUE		0xbd6
#define 	 STRING_MOVIE_SUB_BOTTOM		0xbd7
#define 	 STRING_MOVIE_SUB_MID		0xbd8
#define 	 STRING_MOVIE_SUB_TOP		0xbd9
#define 	 STRING_MOVIE_BREAKPLAY		0xbda
#define 	 STRING_MOVIE_FILE_NOT_SUPPORT		0xbdb
#define 	 STRING_MOVIE_PLAY_END		0xbdc
#define 	 STRING_MOVIE_TIPS		0xbdd
#define 	 STRING_MOVIE_SUB_STREAM		0xbde
#define 	 STRING_MOVIE_SUB_1		0xbdf
#define 	 STRING_MOVIE_SUB_2		0xbe0
#define 	 STRING_MOVIE_VIDEO_SIZE_FULL		0xbe1
#define 	 STRING_MOVIE_SCR_SIZE_FULL		0xbe2
#define 	 STRING_MOVIE_ORG_SIZE		0xbe3
#define 	 STRING_MOVIE_4R3_SIZE		0xbe4
#define 	 STRING_MOVIE_16R9_SIZE		0xbe5
#define 	 STRING_MOVIE_TRACK_1		0xbe6
#define 	 STRING_MOVIE_TRACK_2		0xbe7
#define 	 STRING_MOVIE_TRACK_3		0xbe8
#define 	 STRING_MOVIE_TRACK_4		0xbe9
#define 	 STRING_MUSIC_PLAY_ALL		0xfa1
#define 	 STRING_MUSIC_PLAY_ONCE		0xfa2
#define 	 STRING_MUSIC_PLAY_ROTATE_ONE		0xfa3
#define 	 STRING_MUSIC_PLAY_ROTATE_ALL		0xfa4
#define 	 STRING_MUSIC_PLAY_RANDOM		0xfa5
#define 	 STRING_MUSIC_EQ_NORMAL		0xfa6
#define 	 STRING_MUSIC_EQ_CLASSIC		0xfa7
#define 	 STRING_MUSIC_EQ_JAZZ		0xfa8
#define 	 STRING_MUSIC_EQ_ROCK		0xfa9
#define 	 STRING_MUSIC_EQ_POP		0xfaa
#define 	 STRING_MUSIC_BL_ON		0xfab
#define 	 STRING_MUSIC_BL_10S		0xfac
#define 	 STRING_MUSIC_BL_30S		0xfad
#define 	 STRING_MUSIC_BL_60S		0xfae
#define 	 STRING_MUSIC_BL_90S		0xfaf
#define 	 STRING_MUSIC_PLAY_PREVIOUS		0xfb0
#define 	 STRING_MUSIC_PLAY_NEXT		0xfb1
#define 	 STRING_MUSIC_PLAY_PAUSE		0xfb2
#define 	 STRING_MUSIC_PLAY_FORWARD		0xfb3
#define 	 STRING_MUSIC_PLAY_BACKWARD		0xfb4
#define 	 STRING_MUSIC_PLAY_CUR_INDEX		0xfb5
#define 	 STRING_MUSIC_CUR_INDEX		0xfb6
#define 	 STRING_MUSIC_TOTAL_INDEX		0xfb7
#define 	 STRING_SET_POWER_OFF_LAST10M_CON		0x1389
#define 	 STRING_SET_POWER_BGT_LAST10S_CON		0x138a
#define 	 STRING_SET_POWER_OFF_LAST20M_CON		0x138b
#define 	 STRING_SET_POWER_BGT_LAST30S_CON		0x138c
#define 	 STRING_SET_POWER_OFF_LAST30M_CON		0x138d
#define 	 STRING_SET_POWER_OFF_LAST1H_CON		0x138e
#define 	 STRING_SET_POWER_BGT_LAST60S_CON		0x138f
#define 	 STRING_SET_POWER_BGT_LAST90S_CON		0x1390
#define 	 STRING_SET_COMMON_PRODUCTINFO_DE		0x1391
#define 	 STRING_SET_OUTPUT_NTSC_CON		0x1392
#define 	 STRING_SET_OUTPUT_PAL_CON		0x1393
#define 	 STRING_SET_KEYTONE_TITLE		0x1394
#define 	 STRING_SET_KEYTONE_EX		0x1395
#define 	 STRING_SET_POWER_BGT_TITLE		0x1396
#define 	 STRING_SET_POWER_BGT_EX		0x1397
#define 	 STRING_SET_POWER_BGT_DE		0x1398
#define 	 STRING_SET_COMMON_PRODUCTINFO_TITLE		0x1399
#define 	 STRING_SET_COMMON_PRODUCTINFO_EX		0x139a
#define 	 STRING_SET_COMMON_FACTORY_DEFAULT_EX		0x139b
#define 	 STRING_SET_TIPS_TSIZE		0x139c
#define 	 STRING_SET_POWER_BGT_NEVER_CON		0x139d
#define 	 STRING_SET_POWER_OFF_NEVER_CON		0x139e
#define 	 STRING_SET_PROMPT_POWER_MANAGER		0x139f
#define 	 STRING_SET_COMMON_TOPIC_STYLE1_CON		0x13a0
#define 	 STRING_SET_COMMON_TOPIC_STYLE2_CON		0x13a1
#define 	 STRING_SET_COMMON_TOPIC_STYLE3_CON		0x13a2
#define 	 STRING_SET_TIPS_NO		0x13a3
#define 	 STRING_SET_KEYTONE_OFF_CON		0x13a4
#define 	 STRING_SET_POWER_BGT_OFF_TITLE		0x13a5
#define 	 STRING_SET_POWER_OFF_TITLE		0x13a6
#define 	 STRING_SET_POWER_OFF_EX		0x13a7
#define 	 STRING_SET_POWER_BGT_OFF_DE		0x13a8
#define 	 STRING_SET_COMMON_FACTORY_DEFAULT_TITLE		0x13a9
#define 	 STRING_SET_KEYTONE_ON_CON		0x13aa
#define 	 STRING_SET_KEYTONE_DE		0x13ab
#define 	 STRING_SET_POWER_BGT_ON_EX		0x13ac
#define 	 STRING_SET_POWER_BGT_LEVEL1_CON		0x13ad
#define 	 STRING_SET_POWER_BGT_LEVEL10_CON		0x13ae
#define 	 STRING_SET_POWER_BGT_LEVEL11_CON		0x13af
#define 	 STRING_SET_POWER_BGT_LEVEL12_CON		0x13b0
#define 	 STRING_SET_POWER_BGT_LEVEL13_CON		0x13b1
#define 	 STRING_SET_POWER_BGT_LEVEL14_CON		0x13b2
#define 	 STRING_SET_POWER_BGT_LEVEL15_CON		0x13b3
#define 	 STRING_SET_POWER_BGT_LEVEL2_CON		0x13b4
#define 	 STRING_SET_POWER_BGT_LEVEL3_CON		0x13b5
#define 	 STRING_SET_POWER_BGT_LEVEL4_CON		0x13b6
#define 	 STRING_SET_POWER_BGT_LEVEL5_CON		0x13b7
#define 	 STRING_SET_POWER_BGT_LEVEL6_CON		0x13b8
#define 	 STRING_SET_POWER_BGT_LEVEL7_CON		0x13b9
#define 	 STRING_SET_POWER_BGT_LEVEL8_CON		0x13ba
#define 	 STRING_SET_POWER_BGT_LEVEL9_CON		0x13bb
#define 	 STRING_SET_TIPS_SVERS		0x13bc
#define 	 STRING_SET_COMMON_TOPIC_STYLE_EX		0x13bd
#define 	 STRING_SET_POWER_OFF_DE		0x13be
#define 	 STRING_SET_POWER_BGT_OFF_EX		0x13bf
#define 	 STRING_SET_COMMON_LANGUAGE_DE		0x13c0
#define 	 STRING_SET_COMMON_LANGUAGE_EX		0x13c1
#define 	 STRING_SET_COMMON_TOPIC_STYLE_DE		0x13c2
#define 	 STRING_SET_TIPS_FSIZE		0x13c3
#define 	 STRING_SET_TIPS_YES		0x13c4
#define 	 STRING_SET_COMMON_FACTORY_DEFAULT_DE		0x13c5
#define 	 STRING_SET_OUTPUT_TITLE		0x13c6
#define 	 STRING_SET_OUTPUT_EX		0x13c7
#define 	 STRING_SET_OUTPUT_DE		0x13c8
#define 	 STRING_SET_PROMPT_COMMON		0x13c9
#define 	 STRING_SET_TUESDAY		0x13ca
#define 	 STRING_SET_SATURDAY		0x13cb
#define 	 STRING_SET_WEDNESDAY		0x13cc
#define 	 STRING_SET_THURSDAY		0x13cd
#define 	 STRING_SET_SUNDAY		0x13ce
#define 	 STRING_SET_FRIDAY		0x13cf
#define 	 STRING_SET_MONDAY		0x13d0
#define 	 STRING_SET_COMMON_LANGUAGE_ENGLISH_CON		0x13d1
#define 	 STRING_SET_COMMON_LANGUAGE_TITLE		0x13d2
#define 	 STRING_SET_COMMON_LANGUAGE_CHINESE_CON		0x13d3
#define 	 STRING_SET_COMMON_TOPIC_STYLE_TITLE		0x13d4
#define 	 STRING_SET_COMMON_RESTORE		0x13d5
#define 	 STRING_SET_OK		0x13d6
#define 	 STRING_SET_CUE		0x13d7
#define 	 STRING_SET_VOICE_DE		0x13d8
#define 	 STRING_SET_VOICE_TITLE		0x13d9
#define 	 STRING_SET_VOICE_EX		0x13da
#define 	 STRING_SET_COMMON_LANGUAGE_PORTUGUESE_CON		0x13db
#define 	 STRING_SET_COMMON_LANGUAGE_SPANISH_CON		0x13dc
#define 	 STRING_CONFIRM_BG_SET		0x1771
#define 	 STRING_PHOTO_BG_SAVED		0x1772
#define 	 STRING_PHOTO_ORIGINFILE		0x1773
#define 	 STRING_PHOTO_ALLDIR		0x1774
#define 	 STRING_PHOTO_CURDIR		0x1775
#define 	 STRING_PHOTO_BG_MUSIC		0x1776
#define 	 STRING_PHOTO_ON		0x1777
#define 	 STRING_PHOTO_OFF		0x1778
#define 	 STRING_PHOTO_ZOOM		0x1779
#define 	 STRING_PHOTO_ROTATE		0x177a
#define 	 STRING_PHOTO_BRIGHTNESS		0x177b
#define 	 STRING_PHOTO_SLIDESHOW		0x177c
#define 	 STRING_PHOTO_DEFAULT		0x177d
#define 	 STRING_PHOTO_RANDOM_SEL		0x177e
#define 	 STRING_PHOTO_FADE_IN_FADE_OUT		0x177f
#define 	 STRING_PHOTO_PERSIAN_BLINDS_H		0x1780
#define 	 STRING_PHOTO_PERSIAN_BLINDS_V		0x1781
#define 	 STRING_PHOTO_SLIDE_DOWN		0x1782
#define 	 STRING_PHOTO_SLIDE_LEFT		0x1783
#define 	 STRING_PHOTO_SLIDE_RIGHT		0x1784
#define 	 STRING_PHOTO_SLIDE_UP		0x1785
#define 	 STRING_PHOTO_STRETCH_DOWN		0x1786
#define 	 STRING_PHOTO_STRETCH_UP		0x1787
#define 	 STRING_PHOTO_STRETCH_LEFT		0x1788
#define 	 STRING_PHOTO_STRETCH_RIGHT		0x1789
#define 	 STRING_PHOTO_MOSAIC		0x178a
#define 	 STRING_PHOTO_ZOOM_IN		0x178b
#define 	 STRING_PHOTO_ZOOM_OUT		0x178c
#define 	 STRING_PHOTO_INTERVAL		0x178d
#define 	 STRING_PHOTO_SCALE		0x178e
#define 	 STRING_PHOTO_FAST		0x178f
#define 	 STRING_PHOTO_MIDDLE		0x1790
#define 	 STRING_PHOTO_SLOW		0x1791
#define 	 STRING_PHOTO_AUTO		0x1792
#define 	 STRING_PHOTO_ORIGINAL		0x1793
#define 	 STRING_PHOTO_CROP		0x1794
#define 	 STRING_PHOTO_STRECTCH		0x1795
#define 	 STRING_PHOTO_TAKEN_TIME		0x1796
#define 	 STRING_PHOTO_FILE_SIZE		0x1797
#define 	 STRING_PHOTO_PLACE		0x1798
#define 	 STRING_PHOTO_SIZE		0x1799
#define 	 STRING_PHOTO_RESOLUTION		0x179a
#define 	 STRING_PHOTO_CAMERA_MODEL		0x179b
#define 	 STRING_PHOTO_EXPOSUREBAIS		0x179c
#define 	 STRING_PHOTO_FLASH		0x179d
#define 	 STRING_PHOTO_FOCUS_LENGTH		0x179e
#define 	 STRING_PHOTO_COLOR_SPACE		0x179f
#define 	 STRING_PHOTO_SET_BG		0x17a0
#define 	 STRING_PHOTO_DIG_SEL		0x17a1
#define 	 STRING_EBOOK_BGMUSIC		0x1b59
#define 	 STRING_EBOOK_AUTO		0x1b5a
#define 	 STRING_EBOOK_TXTCOLOR		0x1b5b
#define 	 STRING_EBOOK_GOTO		0x1b5c
#define 	 STRING_EBOOK_ON		0x1b5d
#define 	 STRING_EBOOK_OFF		0x1b5e
#define 	 STRING_EBOOK_FAST		0x1b5f
#define 	 STRING_EBOOK_MIDDLE		0x1b60
#define 	 STRING_EBOOK_SLOW		0x1b61
#define 	 STRING_EBOOK_BLACK		0x1b62
#define 	 STRING_EBOOK_WHITE		0x1b63
#define 	 STRING_EBOOK_GREEN		0x1b64
#define 	 STRING_EBOOK_YELLOW		0x1b65
#define 	 STRING_EBOOK_TIPS_YES		0x1b66
#define 	 STRING_EBOOK_TIPS_NO		0x1b67
#define 	 STRING_EBOOK_BKPOINT		0x1b68
#define 	 STRING_EBOOK_LOADING		0x1b69
#define 	 STRING_EBOOK_DIG_SEL		0x1b6a
#define 	 STRING_QUALITY_RC		0x1f41
#define 	 STRING_RECORD_RC		0x1f42
#define 	 STRING_SAVE_RC		0x1f43
#define 	 STRING_MUSCI_LIST_RC		0x1f44
#define 	 STRING_GOOD_QUALITY_RC		0x1f45
#define 	 STRING_NORMAL_QUALITY_RC		0x1f46
#define 	 STRING_POOR_QUALITY_RC		0x1f47
#define 	 STRING_BACK_RC		0x1f48
#define 	 STRING_PRE_RC		0x1f49
#define 	 STRING_NEXT_RC		0x1f4a
#define 	 STRING_BACKWARD_RC		0x1f4b
#define 	 STRING_FORWARD_RC		0x1f4c
#define 	 STRING_PLAY_RC		0x1f4d
#define 	 STRING_PAUSE_RC		0x1f4e
#define 	 STRING_DELETE_RC		0x1f4f
#define 	 STRING_PLAYING_RC		0x1f50
#define 	 STRING_SAVING_RC		0x1f51
#define 	 STRING_ATTR_RC		0x1f52
#define 	 STRING_FILE_RC		0x1f53
#define 	 STRING_TYPE_RC		0x1f54
#define 	 STRING_SIZE_RC		0x1f55
#define 	 STRING_STOP_RC		0x1f56
#define 	 STRING_RECORD_TIME_RC		0x1f57
#define 	 STRING_FILE_SIZE_RC		0x1f58
#define 	 STRING_RECORDER_RC		0x1f59
#define 	 STRING_RECORD_PLAYER_RC		0x1f5a
#define 	 STRING_YES_RC		0x1f5b
#define 	 STRING_NO_RC		0x1f5c
#define 	 STRING_MSG1_RC		0x1f5d
#define 	 STRING_MSG2_RC		0x1f5e
#define 	 STRING_MSG3_RC		0x1f5f
#define 	 STRING_MSG4_RC		0x1f60
#define 	 STRING_MIC_DETECT_TIP		0x1f61
#define 	 STRING_FM_NAME		0x2329
#define 	 STRING_FM_CHSRH_TITLE		0x232a
#define 	 STRING_FM_CHSRH_TIPS1		0x232b
#define 	 STRING_FM_CHSRH_TIPS2		0x232c
#define 	 STRING_FM_CHSRH_TIPS		0x232d
#define 	 STRING_FM_TIPS_YES		0x232e
#define 	 STRING_FM_TIPS_NO		0x232f
#define 	 STRING_FM_CHANNELNU		0x2330
#define 	 STRING_FM_AUTOSRH		0x2331
#define 	 STRING_FM_MANUALSRH		0x2332
#define 	 STRING_FM_FINETUNE		0x2333
#define 	 STRING_FM_RECORD		0x2334
#define 	 STRING_FM_RETURN		0x2335
#define 	 STRING_FM_CHANNEL		0x2336
#define 	 STRING_FM_MANUAL		0x2337
#define 	 STRING_FM_AUTO		0x2338
#define 	 STRING_FM_TRACK		0x2339
#define 	 STRING_FM_CUE		0x233a
#define 	 STRING_FM_SAVE_FREQ_OK		0x233b
#define 	 STRING_FM_NULL_DISK		0x233c
#define 	 STRING_FM_DIGIT_SELECT		0x233d
#define 	 STRING_FM_CLOSE_SCR_TIP		0x233e
#define 	 STRING_FM_DIG_TIP1		0x233f
#define 	 STRING_FM_DIG_TIP2		0x2340
#define 	 STRING_FM_CLOSE_SCR_TIP		0x2341
#define 	 STRING_DIALOG_OK		0x2711
#define 	 STRING_DIALOG_YES		0x2712
#define 	 STRING_DIALOG_CANCEL		0x2713
#define 	 STRING_DIALOG_NO		0x2714
#define 	 STRING_DIALOG_RETRY		0x2715
#define 	 STRING_DIALOG_ABORT		0x2716
#define 	 STRING_DIALOG_IGNORE		0x2717
#define 	 STRING_DIALOG_DIALOG		0x2718
#define 	 STRING_DTV_SEARCH_NOW		0x2af9
#define 	 STRING_DTV_SEARCH_CH		0x2afa
#define 	 STRING_DTV_MON		0x2afb
#define 	 STRING_DTV_TUE		0x2afc
#define 	 STRING_DTV_WED		0x2afd
#define 	 STRING_DTV_THU		0x2afe
#define 	 STRING_DTV_FRI		0x2aff
#define 	 STRING_DTV_SAT		0x2b00
#define 	 STRING_DTV_SUN		0x2b01
#define 	 STRING_DTV_LCD_BRIGHT1		0x2b02
#define 	 STRING_DTV_LCD_BRIGHT2		0x2b03
#define 	 STRING_DTV_LCD_BRIGHT3		0x2b04
#define 	 STRING_DTV_LCD_BRIGHT4		0x2b05
#define 	 STRING_DTV_LCD_BRIGHT5		0x2b06
#define 	 STRING_DTV_STEREO		0x2b07
#define 	 STRING_DTV_LEFT		0x2b08
#define 	 STRING_DTV_RIGHT		0x2b09
#define 	 STRING_DTV_TV		0x2b0a
#define 	 STRING_DTV_RADIO		0x2b0b
#define 	 STRING_DTV_ALL_PROGRAM		0x2b0c
#define 	 STRING_DTV_SCHEDULE		0x2b0d
#define 	 STRING_DTV_PROGRAM_PREVIEW		0x2b0e
#define 	 STRING_DTV_SETTING_SEARCH		0x2b0f
#define 	 STRING_DTV_SETTING_DISPLAY		0x2b10
#define 	 STRING_DTV_SETTING_BRIGHT		0x2b11
#define 	 STRING_DTV_SETTING_INFO		0x2b12
#define 	 STRING_DTV_SETTING		0x2b13
#define 	 STRING_DTV_DEFAULT		0x2b14
#define 	 STRING_DTV_SCREEN_RATIO		0x2b15
#define 	 STRING_DTV_VIDEO_RATIO		0x2b16
#define 	 STRING_DTV_4R3		0x2b17
#define 	 STRING_DTV_ORGIN_SIZE		0x2b18
#define 	 STRING_DTV_16R9		0x2b19
#define 	 STRING_DTV_POWER_BGT_LEVEL1_CON		0x2b1a
#define 	 STRING_DTV_POWER_BGT_LEVEL10_CON		0x2b1b
#define 	 STRING_DTV_POWER_BGT_LEVEL11_CON		0x2b1c
#define 	 STRING_DTV_POWER_BGT_LEVEL12_CON		0x2b1d
#define 	 STRING_DTV_POWER_BGT_LEVEL13_CON		0x2b1e
#define 	 STRING_DTV_POWER_BGT_LEVEL14_CON		0x2b1f
#define 	 STRING_DTV_POWER_BGT_LEVEL16_CON		0x2b20
#define 	 STRING_DTV_POWER_BGT_LEVEL15_CON		0x2b21
#define 	 STRING_DTV_POWER_BGT_LEVEL2_CON		0x2b22
#define 	 STRING_DTV_POWER_BGT_LEVEL3_CON		0x2b23
#define 	 STRING_DTV_POWER_BGT_LEVEL4_CON		0x2b24
#define 	 STRING_DTV_POWER_BGT_LEVEL5_CON		0x2b25
#define 	 STRING_DTV_POWER_BGT_LEVEL6_CON		0x2b26
#define 	 STRING_DTV_POWER_BGT_LEVEL7_CON		0x2b27
#define 	 STRING_DTV_POWER_BGT_LEVEL8_CON		0x2b28
#define 	 STRING_DTV_POWER_BGT_LEVEL9_CON		0x2b29
#define 	 STRING_DTV_TIPS		0x2b2a
#define 	 STRING_DTV_NO_SINGALS		0x2b2b
#define 	 STRING_DTV_CUR_PROGRAM_OPEN_FAIL		0x2b2c
#define 	 STRING_DTV_NO_CHANNEL		0x2b2d
#define 	 STRING_DTV_CA_SERIAL		0x2b2e
#define 	 STRING_DTV_NO_CA		0x2b2f
#define 	 STRING_DTV_RETURN		0x2b30
#define 	 STRING_DTV_WAIT		0x2b31
#define 	 STRING_DTV_EX_TVOUT		0x2b32
#define 	 STRING_DTV_TVOUT		0x2b33
#define 	 STRING_DTV_SWITCH_TO_PAL		0x2b34
#define 	 STRING_DTV_SWITCH_TO_NTSC		0x2b35
#define 	 STRING_DTV_SEL_CH		0x2b36
#define 	 STRING_DTV_SEL_ERR		0x2b37
#define 	 STRING_DTV_SIGNAL_LOW		0x2b38
#define 	 STRING_DTV_NO_TVOUT		0x2b39
#define 	 STRING_DTV_SELECT_MOVIE		0x2b3a
#define 	 STRING_DTV_MOVIE_PLAY		0x2b3b
#define 	 STRING_DTV_MOVIE_TOTAL		0x2b3c
#define 	 STRING_DTV_SEARCH_VALID_CH		0x2b3d
#define 	 STRING_DTV_TRACK_DE		0x2b3e
#define 	 STRING_DTV_TRACK_TITLE		0x2b3f
#define 	 STRING_DTV_TRACK_EX		0x2b40
#define 	 STRING_DTV_TRACK_1		0x2b41
#define 	 STRING_DTV_TRACK_2		0x2b42
#define 	 STRING_DTV_TRACK_3		0x2b43
#define 	 STRING_DTV_TRACK_4		0x2b44
#define 	 STRING_DTV_SET_LCN_DE		0x2b45
#define 	 STRING_DTV_SET_LCN_TITLE		0x2b46
#define 	 STRING_DTV_SET_LCN_EX		0x2b47
#define 	 STRING_DTV_SET_LCN_ON		0x2b48
#define 	 STRING_DTV_SET_LCN_OFF		0x2b49
#define 	 STRING_DTV_SEVEN_DAYS_EPG		0x2b4a
#define 	 STRING_DTV_SSU_UPDATE		0x2b4b
#define 	 STRING_DTV_START_RECORDING		0x2b4c
#define 	 STRING_DTV_STOP_RECORDING		0x2b4d
#define 	 STRING_DTV_WHETHER_EXIT_FROM_TV		0x2b4e
#define 	 STRING_DTV_ANTENNA_DE		0x2b4f
#define 	 STRING_DTV_ROD_ANTENNA		0x2b50
#define 	 STRING_DTV_EXTERNAL_ANTENNA		0x2b51
#define 	 STRING_DTV_SPACE_IS_OVER		0x2b52
#define 	 STRING_DTV_IS_RECORDING		0x2b53
#define 	 STRING_DTV_NO_SINGAL		0x2b54
#define 	 STRING_DTV_ANTENNA_POWER		0x2b55
#define 	 STRING_DTV_ANTENNA_POWER_ON		0x2b56
#define 	 STRING_DTV_ANTENNA_POWER_OFF		0x2b57
#define 	 STRING_DTV_SWITCH_TO_ROD_ANTENNA		0x2b58
#define 	 STRING_DTV_SWITCH_TO_EXTERNAL_ANTENNA		0x2b59
#define 	 STRING_DTV_WHETHER_SWITCH_TO_ROD_ANTENNA		0x2b5a
#define 	 STRING_LOADING		0x2ee1
#define 	 STRING_WIDGET_OK		0x32c9
#define 	 STRING_WIDGET_YES		0x32ca
#define 	 STRING_WIDGET_WAITING		0x32cb
#define 	 STRING_WIDGET_NO		0x32cc


#endif //__LANG__H__ 


