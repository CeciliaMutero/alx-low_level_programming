#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat -  function that concatenates two strings
 * @s1: destination string
 * @s2: :source string
 * @n: number of bytes to concatenate
 * Return: Always 0 (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int totallen;
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
	{
		n = len2;
	}
	totallen = len1 + n;
	ptr = (char *) malloc(totallen + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[totallen] = '\0';
	return (ptr);
}
