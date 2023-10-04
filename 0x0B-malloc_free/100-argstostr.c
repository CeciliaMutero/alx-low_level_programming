#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 * arguments, separated by newline characters.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	total_length++;

	ptr = (char *)malloc(total_length * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		if (i < ac - 1)
		{
			strcat(ptr, "\n");
		}
		else
		{
			strcat(ptr, "\n");
		}
	}
	return (ptr);
}
