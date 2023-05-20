#include <stdio.h>
/**
 * main - entry point
 * using putchar to code
 * Return: Always 0(Success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
