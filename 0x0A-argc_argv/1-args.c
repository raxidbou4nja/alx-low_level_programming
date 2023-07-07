#include <stdio.h>
#include "main.h"

/**
 * main - prints length of params.
 * @argc: lenght of params.
 * @argv: array of params.
 *
 * Return: length of params
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc-1);

	return (0);
}
