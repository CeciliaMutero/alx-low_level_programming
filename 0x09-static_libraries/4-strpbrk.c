#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a
 * string for any of a set of bytes
 * @s: first string
 * @accept: second string
 *
 * Return: Always 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
	while (*a != '\0')
	{
		if (*s == *a)
		{
			return (s);
		}
		a++;
	}
	s++;
	}
	return (NULL);
}
