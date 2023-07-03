#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: param for A pointer
 * @b: param for the character
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memo = s;

	for (i = 0; i < n; i++)
	{
		memo[i] = b;
	}

	return (memo);
}
