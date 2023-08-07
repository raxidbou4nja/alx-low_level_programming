#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a text file.
 *
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars_read = 0;
	char *buffer = NULL;
	FILE *file;

	if (filename == NULL || letters == 0)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	chars_read = fread(buffer, sizeof(char), letters, file);
	fclose(file);

	if (chars_read > 0)
		fwrite(buffer, sizeof(char), chars_read, stdout);

	free(buffer);

	return (chars_read);
}
