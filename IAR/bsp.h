#ifndef _bsp_H_
#define _bsp_H

#include <msp430.h>       //MSP430x2xx
//#include <msp430xG46x.h //MSP430x4xx

#define  debounceVal        250
#define  delay62_5ms        0xFFFF

#define  DataSegStart      0x200
#define  CodeSegStart      0xC000
#define  StackTosStart     0x0400


#define PBIN               &P1IN
#define PBIFG              &P1IFG
#define PBIE               &P1IE
#define PBIES              &P1IES
#define PBSEL              &P1SEL
#define PBDIR              &P1DIR
#define PBOUT               &P1OUT


#define PB0                0x01
#define PB1                0x02
#define PB2                0x04

#define LCDOUT             &P2OUT
#define LCDDIR             &P2DIR
#define LCDSEL             &P2SEL
#define LCDCONOUT          &P1OUT // 1.5 - 1.7
#define LCDCONSEL          &P1SEL // 1.5 - 1.7
#define LCDCONDIR          &P1DIR // 1.5 - 1.7
#define RS                 0x80
#define RW                 0x40
#define EN                 0x20
#endif