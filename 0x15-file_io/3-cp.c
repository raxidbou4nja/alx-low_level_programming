#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "main.h"

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
