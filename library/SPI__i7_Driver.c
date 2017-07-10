/*

    __i7_Driver.c

    Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

--------------------------------------------------------------------------------

    Version      : 1.0
    Developer    : jeanbosc
    Date         : 2017-07-10

------------------------------------------------------------------------------*/

#include <stdint.h>
#include "__i7_Driver.h"

/*----------------------------------------------------------------------- HAL */
extern sfr sbit i7_CS_PIN;

#if defined( __MIKROC_PRO_FOR_ARM__ )   || \
    defined( __MIKROC_PRO_FOR_DSPIC__ )

static void ( *fpWriteSPI )(unsigned int data_out);
static unsigned int ( *fpReadSPI )(unsigned int buffer);

#elif defined( __MIKROC_PRO_FOR_AVR__ )     || \
      defined( __MIKROC_PRO_FOR_PIC__ )     || \
      defined( __MIKROC_PRO_FOR_8051__ )

static void ( *fpWriteSPI )(unsigned char data_out);
static unsigned char( *fpReadSPI )(unsigned char dummy);

#elif defined( __MIKROC_PRO_FOR_PIC32__ )

static void ( *fpWriteSPI )(unsigned long data_out);
static unsigned long( *fpReadSPI )(unsigned long dummy);

#elif defined( __MIKROC_PRO_FOR_FT90x__ )

static void ( *fpWriteSPI )(unsigned char data_out);
static unsigned char ( *fpReadSPI )(unsigned char dummy);
#endif

static void halWrite(uint8_t *pBuf, uint16_t len);

static void halRead(uint8_t *pBuf, uint16_t len);

static void halTransfer(uint8_t *pIn, uint8_t *pOut, uint16_t len);

static void halWrite(uint8_t *pBuf, uint16_t len)
{
    uint8_t *ptr = pBuf;

    while( len-- )
        fpWriteSPI(*( ptr++ ));
}

static void halRead(uint8_t *pBuf, uint16_t len)
{
    uint8_t *ptr = pBuf;

    while( len-- )
        *ptr++ = fpReadSPI(0x00);
}

static void halTransfer(uint8_t* pIn, uint8_t* pOut, uint16_t len)
{
    uint8_t *in = pIn;
    uint8_t *out = pOut;

    while( len-- )
        *( out++ ) = fpReadSPI(*( in++ ));
}
/*------------------------------------------------------------- PREPROCESSORS */



/*--------------------------------------------------------------------- TYPES */



/*----------------------------------------------------------------- VARIABLES */



/*--------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/*---------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/*---------------------------------------------------------- PUBLIC FUNCTIONS */

void i7_initDriver
(
    T_i7_SPI_Write fnWrite, 
    T_i7_SPI_Read fnRead
)
{
    fpWriteSPI = fnWrite;
    fpReadSPI = fnRead;

    // Pins to initial state
    // ...

    // Power on routine
    // ...

    // HW Reset if needed
    // ...

}

/*------------------------------------------------------------------------------

  __i7_Driver.c

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
