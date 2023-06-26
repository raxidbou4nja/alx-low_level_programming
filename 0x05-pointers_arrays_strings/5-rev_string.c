#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a given string
 */
void rev_string(char *s)
{
	char temp;
	int i, len, strlen_1;

	len = 0;
	strlen_1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	strlen_1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[strlen_1];
		s[strlen_1--] = temp;
	}
}
