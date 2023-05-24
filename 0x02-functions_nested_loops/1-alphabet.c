#include "main.h"

/**
 * main - check the code
 *function that prints the alphabet, in lowercase
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	print_alphabet();
	return (0);
}
