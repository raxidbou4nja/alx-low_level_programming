#include <stdio.h>
#include "main.h"

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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
