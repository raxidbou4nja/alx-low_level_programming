#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - prints an int
 * @arguments: list of arguments
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * print_char - prints a char
 * @arguments: list of arguments
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * print_string - prints a string
 * @arguments: list of arguments
 */
void print_string(va_list arguments)
{
	char *z = va_arg(arguments, char *);

	if (!z)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}
/**
 * print_float - prints floats
 * @arguments: list of arguments
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
/**
 * print_all - prints all
 * @format: formats of arg
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};
	va_list arguments;
	char *separator1 = "", *separator2 = ", ";
	int counter1 = 0, counter2 = 0;

	va_start(arguments, format);
	while (format !=  NULL && format[counter1] != '\0')
	{
		counter2 = 0;
		while (types[counter2].type != '\0')
		{
			if (format[counter1] == types[counter2].type)
			{
				printf("%s", separator1);
				types[counter2].printer(arguments);
				separator1 = separator2;
			}
			counter2++;
		}
		counter1++;
	}
	printf("\n");
	va_end(arguments);
}
