#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: given array
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int index;
	int d1 = 0;
	int d2 = 0;

	for (index = 0; index < size; index++)
	{
		d1 += a[(index * size) + index];
		d2 += a[(size - 1) + ((size - 1) * index)];
	}
	printf("%d, %d\n", d1, d2);
}
