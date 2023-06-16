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

	if (s1[i] != '\0')
		i++;
	if (s2[k] != '\0')
		k++;
	s1[i] = s2[k];

	if (s1 == NULL)
		return(NULL);
	ptr = malloc(s1[i + 1]) * sizeof(char);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
