#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer to be used
 *
 * Return: pointer or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
