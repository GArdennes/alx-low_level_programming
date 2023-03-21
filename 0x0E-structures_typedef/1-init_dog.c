#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize dog
 * @d: structure to check
 * @name: string to check
 * @age: number to check
 * @owner: string to check
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
