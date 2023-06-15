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
	ptr = malloc(i + 1 * sizeof(char));
	for (k = 0; str[k]; k++)
		ptr[k] = str[k];
	return (ptr);
}
