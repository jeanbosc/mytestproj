/*

    __CcCC_Driver.c

    Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

--------------------------------------------------------------------------------

    Version      : 1.0
    Developer    : jeanbosc
    Date         : 2017-07-25

------------------------------------------------------------------------------*/

#include "__CcCC_Driver.h"

/*------------------------------------------------------------------------ HAL */
extern sfr sbit CcCC_PIN;

#if defined( __MIKROC_PRO_FOR_ARM__ )       || \
    defined( __MIKROC_PRO_FOR_DSPIC__ )     || \
    defined( __MIKROC_PRO_FOR_PIC32__ )

static void ( *fpWriteUART )(unsigned int data_out);

#elif defined( __MIKROC_PRO_FOR_AVR__ )     || \
      defined( __MIKROC_PRO_FOR_PIC__ )     || \
      defined( __MIKROC_PRO_FOR_8051__ )    || \
      defined( __MIKROC_PRO_FOR_FT90x__ )
      
static void ( *fpWriteUART )(unsigned char data_out);
#else
static void ( *fpWriteUART )(unsigned char data_out);
#endif

static void halWrite(uint8_t input)
{
    fpWriteUART(input);
}
/*------------------------------------------------------------- PREPROCESSORS */



/*--------------------------------------------------------------------- TYPES */



/*----------------------------------------------------------------- VARIABLES */



/*--------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/*---------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/*---------------------------------------------------------- PUBLIC FUNCTIONS */

void CcCC_initDriver(T_CcCC_UART_Write fpWrite)
{
    fpWriteUART = fpWrite;

    // ...
}

/*------------------------------------------------------------------------------

  __CcCC_Driver.c

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
