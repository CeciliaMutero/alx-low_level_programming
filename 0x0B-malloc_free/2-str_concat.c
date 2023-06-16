#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: the destination string
 * @s2: the source string
 *
 * Return: pointer or Null if failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
		k++;
	ptr = malloc((i + k + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
			i++;
	}

	while (s2[k] != '\0')
	{
		ptr[i] = s2[k];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
}
