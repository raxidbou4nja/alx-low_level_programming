#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: param.
 */

void print_triangle(int size)
{
	int dist;
	int index;

	if (size > 0)
	{
		for (dist = 1; dist <= size; dist++)
		{
			for (index = size - dist; index > 0; index--)
			{
				_putchar(' ');
			}

			for (index = 0; index < dist; index++)
			{
				_putchar('#');
			}

			if (dist == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
