#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: param
 * Return: Always 0
*/

void print_line(int n)
{

	if (n > 0)
	{
		int i = 0;
		while ( i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
