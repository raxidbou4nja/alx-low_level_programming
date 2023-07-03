#include "main.h"

/**
 * _strspn - check the code
 * @s: param of string;
 * @accept: param of needed chars;
 * Return: number of founded chars.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
		char *a = accept;

		found = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (found == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
