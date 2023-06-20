#include "main.h"
/**
 * print_sign - print + if > 0 OR 0 if = 0 OR - if < 0
 * @n: param to compare
 * Return: + | 0 | -
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
