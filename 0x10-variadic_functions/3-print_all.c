#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - prints an int
 * @args: list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - prints a char
 * @args: list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - prints a string
 * @args: list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
}
/**
 * print_float - prints floats
 * @args: list of arguments
 */
void print_float(va_list args)
{
	double value = va_arg(args, double);

	printf("%f", value);
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
	va_list args;
	char *separator1 = "", *separator2 = ", ";
	int count1 = 0, count2 = 0;

	va_start(args, format);
	while (format !=  NULL && format[count1] != '\0')
	{
		count2 = 0;
		while (types[count2].type != '\0')
		{
			if (format[count1] == types[count2].type)
			{
				printf("%s", separator1);
				types[count2].printer(args);
				separator1 = separator2;
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(args);
}
