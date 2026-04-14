/**
 * @file Delay.c
 * @author Sutady (sutady235@gmail.com)
 * @brief 
 * @version 0.2
 * @date 2026-04-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include "Delay.h"
#include "Config.h"
#include <intrins.h>

#if FOSC == 11059200UL

void Delay1ms(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
}

#elif FOSC == 12000000UL

void Delay1ms(void)	//@12.000MHz
{
	unsigned char data i, j;

	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
}

#else 
	#error "Delay module fatal ERROR : Unsupported FOSC value! Please add its implementation."

#endif

/* Delay Xms 通用代码*/
void Delay_ms(unsigned int ms) 
{
	while (ms--)
	{
		Delay1ms();
	}
}

