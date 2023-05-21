#include <stdio.h>

/**
 * main - entry point
 * printing from small to capital letters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}
