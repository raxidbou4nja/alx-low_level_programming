#include <stdio.h>

/**
 * main - print numbers from 0 to 9 with colon and space
 *
 * Return: 0.
 */
int main(void)
{
	int  number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
