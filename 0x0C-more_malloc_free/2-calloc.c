#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size (in bytes) of each element
 *
 * Return: Pointer to the allocated memory (or NULL on failure)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = (size_t)nmemb * size;

	ptr = calloc(nmemb, total_size);
	return (ptr);
}
