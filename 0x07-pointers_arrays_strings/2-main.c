#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer.
 * @c: needed characters.
 *
 * Return: Needed section
 */

char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
	
}