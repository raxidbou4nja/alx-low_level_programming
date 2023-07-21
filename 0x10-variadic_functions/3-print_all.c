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
	va_list args;
	float f;
	char *s, c;
	int arg_count = 0, i;

	va_start(args, format);
	while (format[arg_count] != '\0')
	{
		switch (format[arg_count])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		arg_count++;
		if (format[arg_count] != '\0')
		{
			if (format[arg_count] == 'c' || format[arg_count] == 'i' ||
				format[arg_count] == 'f' || format[arg_count] == 's')
				printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
