#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: struct dog to print
 */
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(ni)";
	if (d->owner == NULL)
		d->owner = "(ni)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


