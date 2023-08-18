#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * age: age of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: Always 0 (success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = malloc(strlen(name) * sizeof(char) + 1);
	newDog->owner = malloc(strlen(owner) * sizeof(char) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}

