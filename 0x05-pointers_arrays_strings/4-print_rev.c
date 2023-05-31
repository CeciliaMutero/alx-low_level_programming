#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @*s: pointer to string
 * @s: string
 * Return: Always 0 (Success)
 */

void print_rev(char *s)

{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
		_putchar(s[length]);
	_putchar('\n');

}
