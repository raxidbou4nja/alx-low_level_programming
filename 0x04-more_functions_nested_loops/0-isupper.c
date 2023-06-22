#include "main.h"

/**
 * _isupper - return is zero when input is between a-z
 * @c: parameter
 * Return: Always 0
*/

int _isupper(int c)
{
	if (c <= 'Z'  && c >= 'A')
	{
		return (1);
	}
		return (0);
}
