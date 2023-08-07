#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"
#include <stdarg.h>

/**
 * error_exit - Prints an error message and exits with the given code.
 *
 * @exit_code: The exit code to use when terminating the program.
 * @format: The format string for the error message.
 */
void error_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);

	exit(exit_code);
}


int main(int argc, char *argv[])
{
	ssize_t chars_read, chars_written;
	int file_from, file_to;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_to == -1)
	{
		close(file_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((chars_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		chars_written = write(file_to, buffer, chars_read);
		if (chars_written == -1 || chars_written != chars_read)
		{
			close(file_from);
			close(file_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (chars_read == -1)
	{
		close(file_from);
		close(file_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
