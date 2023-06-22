#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: param.
 */
void print_square(int size)
{
	int height;
	int width;


	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}

			if (height == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
