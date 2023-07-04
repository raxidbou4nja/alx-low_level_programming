#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: param of string;
 * @accept: param of needed chars;
 * Return: number of founded chars.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;
	int aci;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (aci = 0; accept[aci] != '\0'; aci++)
		{
			if (s[index] == accept[aci])
			{
				return (s + index);
			}
		}
	}
	return (0);
}
