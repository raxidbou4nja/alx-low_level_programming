#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all args
 * @n: number of integers
 * Return: the Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list argSum;

	if (n == 0)
	{
		return (0);
	}

	va_start(argSum, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argSum, int);
	}

	va_end(argSum);

	return (sum);
}
