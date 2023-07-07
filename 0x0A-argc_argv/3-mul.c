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
	int num1;
        int num2;

	if (argc < 3) {
		printf("Error");
		return 1;
	}

	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);

	printf("%d\n", num1 * num2);

	return 0;
}
