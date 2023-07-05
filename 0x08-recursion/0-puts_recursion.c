#include "main.h"
/**
 * _puts_recursion - prints a string using putchar.
 * @s: pointer of given string.
 * return: void.
*/

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
