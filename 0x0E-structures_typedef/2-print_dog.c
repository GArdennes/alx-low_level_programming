#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function to print struct dog
 * @d: structure to check
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
