#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)

{
	int i;

		for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
	{
		_putchar('1');
		_putchar(i % 10 + '0');
	}
		else
	{
		_putchar(i + '0');
	}
	}
	_putchar('\n');

}