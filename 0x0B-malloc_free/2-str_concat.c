#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer of string or Null.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	size_t S1Size;
	size_t S2Size;
	int i = 0;
	int o = 0;


	S1Size = strlen(s1);
	S2Size = strlen(s2);

	s = malloc(sizeof(char) * (S1Size + S2Size));

	if (s == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[o] != '\0')
	{
		s[i] = s2[o];
		o++;
		i++;
	}

	s[i + 1] = '\0';

	return (s);
}
