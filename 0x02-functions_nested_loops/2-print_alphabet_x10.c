#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)

{
	int num;
	char ch;

	num = 0;

	while (num < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
			num++;
		 _putchar('\n');
	}
}

