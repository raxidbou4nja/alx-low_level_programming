#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: format string that says arg types
 */

void print_all(const char * const format, ...)
{
	char *s, c;
	double f;
	int arg_count = 0, is_first_arg = 1, i;
	va_list args;

	va_start(args, format);
	while (format[arg_count] != '\0')
	{
		if (format[arg_count] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", is_first_arg ? "" : ", ", c);
		}
		else if (format[arg_count] == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", is_first_arg ? "" : ", ", i);
		}
		else if (format[arg_count] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", is_first_arg ? "" : ", ", f);
		}
		else if (format[arg_count] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("%s(nil)", is_first_arg ? "" : ", ");
			} else
			{
				printf("%s%s", is_first_arg ? "" : ", ", s);
			}
		}
		is_first_arg = 0;
		arg_count++;
	}
	va_end(args);
	printf("\n");
}
