#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of int
 * @size: size of int
 *
 * Return: Always 0 (success)
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalsize;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, size);
	return (ptr);
}
