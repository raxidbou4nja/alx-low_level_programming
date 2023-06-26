#include "main.h"

/**
 * print_rev - prints a string in reversed way,
 * followed by a new line, to stdout
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int ln = 0, i;

	while (s[i++])
	{
		ln++;
	}

	for (i = ln - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
