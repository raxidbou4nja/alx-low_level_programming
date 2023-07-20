#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 if wrong number of arguments,
 *		 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	char *main_ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx ", main_ptr[i]);
	}

	printf("\n");

	return (0);
}
