#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: variable name
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';
	return (dest);
}
