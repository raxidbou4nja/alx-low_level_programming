#include "main.h"

/**
 * _isdigit - return is zero when input is between 0-9
 * @c: parameter
 * Return: Always 0
*/

int _isdigit(int c)
{

	if (c <= '9'  && c >= '0')
	{
		return (1);
	}

	return (0);

}
