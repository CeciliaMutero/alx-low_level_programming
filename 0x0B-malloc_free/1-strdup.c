#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = (char *)malloc(len * sizeof(char) + 1);
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
