#include "main.h"
/**
 * factorial - the factorial of a given number
 * @n: pointer of given number.
 * Return: facturial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
