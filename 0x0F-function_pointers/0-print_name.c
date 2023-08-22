#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

void print_as_is(char *name)
{
	printf("Name: %s\n", name);
}

void print_uppercase(char *name)
{
	int i;
	char c;

	for (i = 0; name[i]; i++)
	{
		c = name [i];
		if (c >= 'a' && c <= 'z')
		{
			c = c - 'a' + 'A';
		}
		_putchar(c);
	}
	_putchar('\n');
}

