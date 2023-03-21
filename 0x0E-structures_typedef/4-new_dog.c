#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - prints a struct dog
 * @name: String to check
 * @age: Number to check
 * @owner: String to check
 *
 * Return: On success result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(strlen(name) + 1);
	newdog->owner = malloc(strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);

	newdog->age = age;

	return (newdog);
}
