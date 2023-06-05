#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - capitalizes all words of a string
 * @str: string
 * Return: Always 0 (Success)
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}

		capitalize_next = 0;
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' ||
		*ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
		*ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
			ptr++;
	}

	return (str);
}
