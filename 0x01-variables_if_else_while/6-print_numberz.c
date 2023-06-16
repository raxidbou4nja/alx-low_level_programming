#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: 0.
 */
int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
