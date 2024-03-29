#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: string to be printed
 * @f: pointer to function
 * Return: always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		if (*name >= 'a' && *name <= 'z')
		{
			*name -= 'a' - 'A';
		}
			f(name);
			name++;
	}
}
/**
 * print_char - function that prints a name
 * @c: pointer to string
 *
 * Return: always 0 (success)
 */
void print_char(char *c)
{
	putchar(*c);
}
