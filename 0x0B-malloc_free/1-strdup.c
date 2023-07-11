#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - prints string
 * @str: a givin string
 *
 * Return: chars.
 */

char *_strdup(char *str)
{
	size_t len;
	char *dupv;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dupv = malloc(1 + len * sizeof(char));

	if (dupv != NULL)
	{
		strcpy(dupv, str);
	}

	return (dupv);
}
