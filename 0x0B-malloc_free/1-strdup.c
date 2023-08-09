#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: string
 *
 * Return: Always 0 (success)
 */

char *_strdup(char *str)
{
	int len = 0;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(len * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
return (ptr);
}
