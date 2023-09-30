#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring.
 * @haystack: first string
 * @needle: second string
 *
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

return (NULL);
}
