/*

    __CcCC_Driver.h

    Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

------------------------------------------------------------------------------*/

/**
@file           __CcCC_Driver.h
@brief 			sdfsdfsd Click
   
@mainpage sdfsdfsd Click
@{

### Device Description ###

    sdfs

@}

@defgroup    CcCC
@brief       sdfsdfsd Click Driver
@{

    Global Library Prefix : **CcCC**
    Version               : **1.0**
    Date                  : 2017-07-25
    Developer             : *jeanbosc*

    sdfsdf

/*----------------------------------------------------------------------------*/
/**
    @example Click_sdfsdfsd_ARM_STM.c
    @example Click_sdfsdfsd_ARM_TIVA.c
    @example Click_sdfsdfsd_ARM_CEC.c
    @example Click_sdfsdfsd_ARM_KIN.c
    @example Click_sdfsdfsd_ARM_MSP.c
    @example Click_sdfsdfsd_PIC.c
    @example Click_sdfsdfsd_PIC32.c
    @example Click_sdfsdfsd_DSPIC.c
    @example Click_sdfsdfsd_AVR.c
    @example Click_sdfsdfsd_FTDI.c
    @example Click_sdfsdfsd_ARM_STM.mbas
    @example Click_sdfsdfsd_ARM_TIVA.mbas
    @example Click_sdfsdfsd_ARM_CEC.mbas
    @example Click_sdfsdfsd_ARM_KIN.mbas
    @example Click_sdfsdfsd_ARM_MSP.mbas
    @example Click_sdfsdfsd_PIC.mbas
    @example Click_sdfsdfsd_PIC32.mbas
    @example Click_sdfsdfsd_DSPIC.mbas
    @example Click_sdfsdfsd_AVR.mbas
    @example Click_sdfsdfsd_FTDI.mbas
    @example Click_sdfsdfsd_ARM_STM.mpas
    @example Click_sdfsdfsd_ARM_TIVA.mpas
    @example Click_sdfsdfsd_ARM_CEC.mpas
    @example Click_sdfsdfsd_ARM_KIN.mpas
    @example Click_sdfsdfsd_ARM_MSP.mpas
    @example Click_sdfsdfsd_PIC.pas
    @example Click_sdfsdfsd_PIC32.pas
    @example Click_sdfsdfsd_DSPIC.pas
    @example Click_sdfsdfsd_AVR.pas
    @example Click_sdfsdfsd_FTDI.pas

*//*--------------------------------------------------------------------------*/

#ifndef _CcCC_H_
#define _CcCC_H_

#include <stdint.h>

/*-------------------------------------------------------------- HAL POINTERS */
#if defined( __MIKROC_PRO_FOR_ARM__ )       || \
    defined( __MIKROC_PRO_FOR_DSPIC__ )     || \
    defined( __MIKROC_PRO_FOR_PIC32__ )

typedef void ( *T_CcCC_UART_Write )(unsigned int data_out);

#elif defined( __MIKROC_PRO_FOR_AVR__ )     || \
      defined( __MIKROC_PRO_FOR_PIC__ )     || \
      defined( __MIKROC_PRO_FOR_8051__ )    || \
      defined( __MIKROC_PRO_FOR_FT90x__ )
      
typedef void ( *T_CcCC_UART_Write )(unsigned char data_out);
#else
typedef void ( *T_CcCC_UART_Write )(unsigned char data_out);
#endif
/*----------------------------------------------------------------------------*/

/**
 * @name 		sdfsdfsd Click Registers
 *//*-------------------------------------------------------------------------*/
///@{

#define _CcCC_STATUS

///@}
/**
 * @name 		sdfsdfsd Click Return Values
 *//*-------------------------------------------------------------------------*/
///@{

#define _CcCC_OK (0)
#define _CcCC_ERR (-1)

///@}
/**
 * @name 		sdfsdfsd Click Types
 *//*-------------------------------------------------------------------------*/
///@{


///@}
/**
 * @name 		sdfsdfsd Click Driver Functions
 *//*-------------------------------------------------------------------------*/
///@{
#ifdef __cplusplus
extern "C"{
#endif

/**
 * @brief sdfsdfsd Driver Initialization
 *
 * @param[in] fpWrite   UART Write Function
 *
 * Initialization of sdfsdfsd driver.
 *
 * @note
 * This function must be called first.
 *
 */
void CcCC_initDriver(T_CcCC_UART_Write fpWrite);

#ifdef __cplusplus
} // extern "C"
#endif
#endif
///@}
///@}
/*------------------------------------------------------------------------------

  __CcCC_Driver.h

  Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

    This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.

------------------------------------------------------------------------------*/
