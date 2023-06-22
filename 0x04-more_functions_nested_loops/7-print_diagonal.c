#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: param
 */
void print_diagonal(int n)
{

	int step;
	int distance;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (step = 0; step < n; ++step)
		{
			for (distance = 0; distance < step; distance++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
