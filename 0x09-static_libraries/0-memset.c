#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: string
 * @b: byte used to fill
 * @n: number of bytes to be filled
 *
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
