#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * @size: number of elements
 * @c: variable used
 *
 * Return: Always 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}


