#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: integer used
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: Memory allocation failed\n");
		exit(98);
	}

	return (ptr);
}

