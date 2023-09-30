#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: Always 0 success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
