#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function to free dog_t *d
 * @d: structure to check
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
