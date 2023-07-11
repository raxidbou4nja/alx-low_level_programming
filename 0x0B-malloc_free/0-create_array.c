#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @c: a givin string
 * @size: the size of the memory to print
 *
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc((size + 1) * sizeof(char));
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		array[size] = '\0';

		return (array);
	}

	return (NULL);
}
