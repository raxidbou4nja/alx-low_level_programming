#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest:  buffer to copy the string to.
 * @src: source string to copy.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, index;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (index = 0; index < len; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
