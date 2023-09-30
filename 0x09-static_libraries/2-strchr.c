#include <stdio.h>
#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: string to look out c
 * @c: character to look out for
 *
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}
return (NULL);
}
