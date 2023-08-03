#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints Binary of a number
 *
 * @n: A pointer to a number
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}
