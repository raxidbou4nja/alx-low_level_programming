#include "main.h"

/**
 * _sqrt_helper - Helper function to recursively calculate the square root
 * @n: The original number
 * @start: The lower bound of the search range
 * @end: The upper bound of the search range
 *
 * Return: The natural square root of n if found, otherwise -1
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - Calculates the natural square
 * root of a number using recursion
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}
