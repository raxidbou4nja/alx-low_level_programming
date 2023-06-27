#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: string param
 */
void puts_half(char *str)
{
	int i = 0, lngt = 0, n;

	while (str[i++])
		lngt++;

	if ((lngt % 2) == 0)
		n = lngt / 2;

	else
		n = (lngt + 1) / 2;

	for (i = n; i < lngt; i++)
		_putchar(str[i]);

	_putchar('\n');
}
