#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Description: This function determines the endianness
 *
 * Return: 0 if the system is big-endian
 * 1 if the system is little-endian.
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr = (char *)&value;

	return (*ptr == 1);
}

