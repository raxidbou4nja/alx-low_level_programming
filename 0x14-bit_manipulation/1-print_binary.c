#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints Binary of a number
 *
 * @num: A pointer to a number
 *
 */

void print_binary(unsigned int num)
{
	if (num > 1)
	{
		print_binary(num >> 1);
	}
	_putchar('0' + (num & 1));
}
