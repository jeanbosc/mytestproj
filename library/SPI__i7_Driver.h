/*

    __i7_Driver.h

    Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

------------------------------------------------------------------------------*/

/**
@file           __i7_Driver.h
@brief 			tr Click
   
@mainpage tr Click
@{

### Device Description ###

    45

@}

@defgroup    i7
@brief       tr Click Driver
@{

    Global Library Prefix : **i7**
    Version               : **1.0**
    Date                  : 2017-07-10
    Developer             : *jeanbosc*

    5eryh

/*----------------------------------------------------------------------------*/
/**
    @example Click_tr_ARM_STM.c
    @example Click_tr_ARM_TIVA.c
    @example Click_tr_ARM_CEC.c
    @example Click_tr_ARM_KIN.c
    @example Click_tr_ARM_MSP.c
    @example Click_tr_PIC.c
    @example Click_tr_PIC32.c
    @example Click_tr_DSPIC.c
    @example Click_tr_AVR.c
    @example Click_tr_FTDI.c
    @example Click_tr_ARM_STM.mbas
    @example Click_tr_ARM_TIVA.mbas
    @example Click_tr_ARM_CEC.mbas
    @example Click_tr_ARM_KIN.mbas
    @example Click_tr_ARM_MSP.mbas
    @example Click_tr_PIC.mbas
    @example Click_tr_PIC32.mbas
    @example Click_tr_DSPIC.mbas
    @example Click_tr_AVR.mbas
    @example Click_tr_FTDI.mbas
    @example Click_tr_ARM_STM.mpas
    @example Click_tr_ARM_TIVA.mpas
    @example Click_tr_ARM_CEC.mpas
    @example Click_tr_ARM_KIN.mpas
    @example Click_tr_ARM_MSP.mpas
    @example Click_tr_PIC.pas
    @example Click_tr_PIC32.pas
    @example Click_tr_DSPIC.pas
    @example Click_tr_AVR.pas
    @example Click_tr_FTDI.pas

*//*--------------------------------------------------------------------------*/

#ifndef _i7_H_
#define _i7_H_

#include <stdint.h>

/*-------------------------------------------------------------- HAL POINTERS */
#if defined( __MIKROC_PRO_FOR_ARM__ )       || \
    defined( __MIKROC_PRO_FOR_DSPIC__ )

typedef void ( *T_i7_SPI_Write )(unsigned int data_out);
typedef unsigned int ( *T_i7_SPI_Read )(unsigned int buffer);

#elif defined( __MIKROC_PRO_FOR_AVR__ )     || \
      defined( __MIKROC_PRO_FOR_PIC__ )     || \
      defined( __MIKROC_PRO_FOR_8051__ )

typedef void ( *T_i7_SPI_Write )(unsigned char data_out);
typedef unsigned char ( *T_i7_SPI_Read )(unsigned char dummy);

#elif defined( __MIKROC_PRO_FOR_PIC32__ )

typedef void ( *T_i7_SPI_Write )(unsigned long data_out);
typedef unsigned long( *T_i7_SPI_Read )(unsigned long dummy);

#elif defined( __MIKROC_PRO_FOR_FT90x__ )

typedef void ( *T_i7_SPI_Write )(unsigned char data_out);
typedef unsigned char ( *T_i7_SPI_Read )(unsigned char dummy);
#else
typedef void ( *T_i7_SPI_Write )(uint8_t input);
typedef uint8_t ( *T_i7_SPI_Read )(uint8_t input);
#endif
/*----------------------------------------------------------------------------*/

/**
 * @name 		tr Click Registers
 *//*-------------------------------------------------------------------------*/
///@{

#define _i7_STATUS

///@}
/**
 * @name 		tr Click Return Values
 *//*-------------------------------------------------------------------------*/
///@{

#define _i7_OK (0)
#define _i7_ERR (-1)

///@}
/**
 * @name 		tr Click Types
 *//*-------------------------------------------------------------------------*/
///@{


///@}
/**
 * @name 		tr Click Driver Functions
 *//*-------------------------------------------------------------------------*/
///@{
#ifdef __cplusplus
extern "C"{
#endif

/**
 * @brief tr Driver Initialization
 *
 * @param[in] fnWrite   SPI Write Function
 * @param[in] fnRead    SPI Read Function
 *
 * Initialization of ret driver.
 *
 * @note
 * This function must be called first.
 *
 */
void i7_initDriver(T_i7_SPI_Write fnWrite,
                              T_i7_SPI_Read fnRead);


#ifdef __cplusplus
} // extern "C"
#endif
#endif
///@}
///@}
/*------------------------------------------------------------------------------

  __tr_Driver.h

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
