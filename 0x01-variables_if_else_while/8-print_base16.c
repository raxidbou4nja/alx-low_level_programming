#include <stdio.h>

/**
 * main - print numbers from 0 to 9 and a to f as Hexadecimal
 *
 * Return: 0.
 */
int main(void)
{
	int  number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (letter = 'a'; letter <= 'f' ; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
