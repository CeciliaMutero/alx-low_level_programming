#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates
 * all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: Always 0 (success)
 */

char *argstostr(int ac, char **av)
{
	int j = 0;
	char *ptr;
	int len = 0;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		char *s = av[i];

		while (*s != '\0')
		{
			len++;
			s++;
		}
		len++;
	}
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		char *s = av[i];

		while (*s != '\0')
		{
			ptr[j] = *s;
			j++;
			s++;
		}
		ptr[j] = '\n';
		j++;
	}
ptr[j] = '\0';
return (ptr);
}
