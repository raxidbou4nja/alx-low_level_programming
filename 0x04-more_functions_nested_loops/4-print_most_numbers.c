#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 & 4
 * Return: Always 0
*/

void print_most_numbers(void)
{

	int number = 0;

	while (number < 10)
	{
		if (number != 2 && number != 4)
		{
			_putchar((number % 10) + '0');
		}
		number++;
	}

	_putchar('\n');
}
