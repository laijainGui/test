/*******************************************************************************
 *
 * FILE NAME          : MxL_Debug.h
 * 
 * AUTHOR             : Brenndon Lee
 *
 * DATE CREATED       : 10/25/2010
 *
 * DESCRIPTION        : Debug header files 
 *
 *******************************************************************************
 *                Copyright (c) 2010, MaxLinear, Inc.
 ******************************************************************************/

#ifndef __MXL_DEBUG_H__
#define __MXL_DEBUG_H__

/******************************************************************************
    Include Header Files
    (No absolute paths - paths handled by make file)
******************************************************************************/

//#include <stdio.h>
#include "MaxLinearDataTypes.h"

/******************************************************************************
    Macros
******************************************************************************/

//#define MxL_DLL_DEBUG0 printf


//#define printf          		__msg
#define MxL_DLL_DEBUG0 __msg


int MXL603RegInit(void);
int MXL603FreLock(int frequency);

#endif /* __MXL_DEBUG_H__*/