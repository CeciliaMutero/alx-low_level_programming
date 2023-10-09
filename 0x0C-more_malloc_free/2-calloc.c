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
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);
	return (ptr);
}
