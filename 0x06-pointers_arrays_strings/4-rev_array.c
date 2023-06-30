#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */


void reverse_array(int* a, int n)
{
	for (int index = 0; index < n / 2; index++)
	{
		int temp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = temp;
	}
}
