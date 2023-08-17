#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that print a struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
	if (d == NULL)
		return;
}
