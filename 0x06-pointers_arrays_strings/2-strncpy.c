#include "main.h"

/**
 * _strncpy - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: length
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srcLen = 0;

	while (src[index++])
	{
		srcLen++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = srcLen; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
