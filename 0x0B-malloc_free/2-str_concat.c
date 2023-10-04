#include "main.h"
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *ptr;
	
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = (char *)malloc((len1 + len2) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr [i] = s2[i];
	}
	free(ptr);
	return (ptr);
}

