#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: str to copy
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated
 * string
 */

char *_strdup(char *str)
{
	int i, k;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;

	while (str[k] != '\0')
	{
		ptr[k] = str[k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
