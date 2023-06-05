#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @str: pointer to str
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{

			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
