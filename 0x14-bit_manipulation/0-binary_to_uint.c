#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 characters
 * representing the binary number.
 *
 * Return: The converted unsigned int number,
 * or 0 if there is one or more characters in
 * the string @b that is not '0' or '1', or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	unsigned int multiplier = 1;
	int length = 0, i;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		result += (b[i] - '0') * multiplier;
		multiplier *= 2;
	}

	return (result);
}
