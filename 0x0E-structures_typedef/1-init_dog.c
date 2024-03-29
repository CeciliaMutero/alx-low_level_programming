#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize
 * a variable of type struct dog
 * @d: pointer to datatype
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Always 0 (success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
