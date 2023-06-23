#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long number = 612852475143;
	int divider = 2;

	while (divider != number)
	{
		if (number % divider == 0)
		{
			number = number / divider;
		}
		else
		{
			divider++;
		}
	}

	printf("%lu\n", number);
	return (0);
}
