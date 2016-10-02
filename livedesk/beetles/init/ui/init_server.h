/*
************************************************************************************************************************
*											         ePDK
*						            the Easy Portable/Player Develop Kits
*									           desktop system 
*
*						          (c) Copyright 2007-2010, Jackie, China
*										All Rights Reserved
*
* File    		: init_server.c
* By      		: Jackie.chen
* Func		: init server
* Version	: v1.0
* ======================================================================================================================
* 2010-10-25  Jackie.chen  create this file, implements the fundemental interface;
************************************************************************************************************************
*/
#ifndef __INIT_SERVER_H__
#define __INIT_SERVER_H__

typedef struct init_ctl_t
{

	/* 关屏 timer */
	__s32 					 closescn_timeout;	/* 自动关屏时间 	*/	
	__bool					 closescn_gate_on;		/* 是否禁止自动关屏 */	
	__s32					 close_scn_time_id;		/* 自动关屏timer id */

	/* 低电查询 */
	__s32 					 low_power_check_timeout;
	__s32					 low_power_check_time_id;

    __s32                    power_off_check_pmu_timeout;
    __s32                    power_off_check_pmu_time_id;
    user_gpio_set_t          power_off_check_pmu_gpio;
    __hdle                   power_off_check_pmu_pin_req;
    
	__s32 					 volume_save_check_timeout;
	__s32					 volume_save_check_time_id;

	/* linein det */
	__s32 					 io_ctrl_timeout;
	__s32					 io_ctrl_time_id;

	/* echo det */
	__s32 					 io_echo_timeout;
	__s32					 io_echo_time_id;

	/* 信号量 */
	__krnl_event_t			*state_sem;			/* 查询状态信号量  */


	/* 桌面事件状态标识位*/
	__bool 					 usb_connect;		/* usb 是否连接到 pc */
	__bool 					 screen_close_done;	/* 屏幕是否已经关闭  */

	/* msg enble */
	__bool					key_msg_enble;

	__bool                  			closescn_timer_exist;
	__bool                  			usb_host_is_working_before_standy;
	__bool                 			power_off;

	__bool					usb_power_support;
	__bool					g_b_enable_standby;
    
}__init_ctl_t;

typedef enum
{
	POWEROFF_DIALOG,
	LOWPOWER_DIALOG,
	USBD_DIALOG,
	IOCTRL_DIALOG,
	IOECHO_DIALOG,
	FW_UPDATA_DIALOG,
	NONE_DIALOG
}main_dialog_t;

typedef struct 
{
	/* 图层句柄 */
	//H_LYR hbar_layer;			// 标题栏图层	
	H_LYR dialog_layer;			// 弹框图层
		
	/* 窗口句柄 */	
	H_WIN init_win;
	H_WIN headbar_win;			// 标题栏窗口	
	H_WIN dialog_win;			// 对话框窗口	
	
	char app_title[32];			// headbar show app_name
	
	/* 当前headbar 现场 */
	//char hbar_title[32];
	
	/* 系统状态 dialog 相关 */
	main_dialog_t cur_dialog;
	__bool echo_flag;
	__bool usb_plug_in;//usb刚刚连接，用于防止低电或关机对话框关闭后，程序被关闭。
	__bool usb_connect;
 	__bool low_power;
 	__bool power_off;
 	__bool io_ctrl;
 	__bool io_echo;
 	__bool fw_update;////default 0
}init_scene_t;

void init_lock(__gui_msg_t *msg);

void init_unlock(__gui_msg_t *msg);

H_WIN init_mainwin_create(void);

#endif

