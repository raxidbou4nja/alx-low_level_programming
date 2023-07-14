#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements.
 * @size: size of each array element.
 *
 * Return: if fails - NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(size * nmemb);

	if (memory == NULL)
	{
		return (NULL);
	}

	filler = memory;

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}

	return (memory);
}
