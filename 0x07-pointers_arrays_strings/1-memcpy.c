#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer.
 * @src: source buffer.
 * @n: number of bytes.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *desn = dest;
	char *source = src;

	for (i = 0; i < n; i++)
		desn[i] = source[i];

	return (dest);
}
