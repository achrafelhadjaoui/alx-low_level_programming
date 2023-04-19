#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that ptint a struct dog
 * @d: the only element
 */

void print_dog(struct dog *d)
{
	/* @dog: name of struct */
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	printf("NAME: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
