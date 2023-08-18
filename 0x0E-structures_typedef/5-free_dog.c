#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: pointer to dog
 *
 * Return: Always 0 (success)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
