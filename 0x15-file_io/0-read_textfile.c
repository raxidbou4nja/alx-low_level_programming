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
	int file_descriptor;
	ssize_t chars_written;
	
	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	chars_read = read(file_descriptor, buffer, letters);
	close(file_descriptor);

	if (chars_read <= 0)
	{
		free(buffer);
		return (0);
	}

	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	free(buffer);

	if (chars_written != chars_read)
		return (0);

	return (chars_read);
}
