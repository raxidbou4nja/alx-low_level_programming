#include "main.h"
/**
 * print_chessboard - board to print
 * @a: array to print
 * Return: returns crap
 */
void print_chessboard(char (*a)[8])
{
	int index;
	int sx;

	for (index = 0; index < 8; index++)
	{
		for (sx = 0; sx < 8; sx++)
		{
			_putchar(a[index][sx]);
		}
		_putchar('\n');
	}
}
