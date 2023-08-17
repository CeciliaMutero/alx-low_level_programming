#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  function that prints anything
 * @format: constant character
 *
 * Return: Always 0 (success)
 */
void print_all(const char * const format, ...)
{
	char c;
	char *s;
	int separator = 0;
	va_list args;

	va_start(args, format);
	while (format && format[separator])
	{
		if (separator)
	{
		printf(", ");
	}
	c = format[separator];
	if (c == 'c')
	printf("%c", va_arg(args, int));
	else if (c == 'i')
	{
		printf("%d", va_arg(args, int));
	}
	else if (c == 'f')
	{
		printf("%f", va_arg(args, double))
	}
	else if (c == 's')
	{
		s = va_arg(args, char *);
		if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
	}
	separator++;
	}
	va_end(args);
	printf("\n");
}
