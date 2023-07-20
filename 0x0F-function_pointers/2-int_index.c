#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: If no element matches or size <= 0 - -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
