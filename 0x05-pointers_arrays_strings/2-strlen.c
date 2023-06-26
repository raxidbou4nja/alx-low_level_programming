#include "main.h"

/**
 * _strlen - counts length of a given string.
 * @s: parameter of a given string.
 *
 * Return: number of chars.
 */
int _strlen(char *s)
{
	int lngt = 0;

	while (*s++)
	{
		lngt++;
	}

	return (lngt);
}
