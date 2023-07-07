#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints file's name and params
 * @argc: lenght of params.
 * @argv: array of params.
 *
 * Return: name of file and params
*/

int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	int d;
	int num;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{

		for (d = 0; argv[i][d]; d++)
		{
			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

			num = strtol(argv[i], NULL, 10);
			total = num + total;
	}
	printf("%d\n", total);

	return (0);
}
