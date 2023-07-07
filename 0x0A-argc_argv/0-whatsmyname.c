#include "main.h"

/**
 * main - prints file's name.
 * @argc: lenght of params.
 * @argv: array of params.
 *
 * Return: name of file
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
	}

	return (0);
}
