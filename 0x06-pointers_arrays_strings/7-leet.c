#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string
 *
 * Return: leet string
 */
char *leet(char *s)
{
	char azArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; azArr[n] != '\0'; n++)
		{
			if (s[i] == azArr[n])
			{
				s[i] = azArr[n + 1];
				break;
			}
		}
	}
	return (s);
}
