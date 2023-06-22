#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0
*/

void more_numbers(void)
{

	int number = 0;

	while (number <= 10)
	{
		for (int i = 0; i <= 14; ++i)
		{
			_putchar((number % 10) + '0');
		}
		number++;
	}

	_putchar('\n');
}
