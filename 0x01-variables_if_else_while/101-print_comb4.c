#include <stdio.h>
/**
 * main - entry point
 * all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
		for (n = j + 1; n < 10; n++)
	{
		putchar('0' + i);
		putchar('0' + j);
		putchar('0' + n);
	if (i != 7 || j != 8 || n != 9)
	{
		putchar (',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
		return (0);
}
