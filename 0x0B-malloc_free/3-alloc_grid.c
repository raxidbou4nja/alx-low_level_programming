#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)calloc(width, sizeof(int));

			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}
				free(grid);
				return (NULL);
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (grid);
}
