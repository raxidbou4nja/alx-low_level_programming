#include "main.h"

/**
 * is_prime_helper - helps decide if i'm right
 * @n: integer
 * @divisor: integer to get root of
 * Return: (1) if is a prime number
 */

int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
