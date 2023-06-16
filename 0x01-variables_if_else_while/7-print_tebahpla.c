#include <stdio.h>

/**
 * main - print letters from z to a
 *
 * Return: 0.
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
