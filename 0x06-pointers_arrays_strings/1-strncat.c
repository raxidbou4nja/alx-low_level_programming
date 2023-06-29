#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number times
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destLen = 0;

	while (dest[index++])
		destLen++;

	for (index = 0; src[index] && index < n; index++)
		dest[destLen++] = src[index];

	return (dest);
}
