#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Always 0 (success)
 */

void print_diagonal(int n)

{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
	for (k = 0; k < i; k++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
}
