#include <stdio.h>
#include "main.h"

/**
 * main - prints file's name.
 * @argc: lenght of params.
 * @argv: array of params.
 *
 * Return: name of file
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
