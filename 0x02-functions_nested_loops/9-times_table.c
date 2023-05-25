#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * return: 0 always
 */

void times_table(void)
{
	int rows, columns, product;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
	{
		product = rows * columns;
		if (columns == 0)
			_putchar('0');
		else if (product < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(product + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
	}
		_putchar('\n');
	}
}
