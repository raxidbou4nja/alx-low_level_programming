#include "main.h"
/**
 * _puts_recursion - prints a revered string using putchar
 * @s: pointer of given string.
 * return: void.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
