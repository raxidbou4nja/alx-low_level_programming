#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer parameter
 * @b: pointer parameter
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
