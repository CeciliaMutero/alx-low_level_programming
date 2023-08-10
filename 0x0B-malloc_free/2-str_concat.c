#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Always 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc((len1 + len2) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}

