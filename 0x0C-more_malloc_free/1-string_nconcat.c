#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: integer used
 *
 * Return: Always 0 (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_len)
		n = s2_len;

	result = (char *)malloc(s1_len + n + 1);

	if (result == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (NULL);
	}
	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return (result);
}
