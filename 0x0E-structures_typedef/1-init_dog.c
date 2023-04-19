#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @name: second element
 * @age: third element
 * @owner: forth element
 * @d: fifth element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	/*@dog: name of the structure*/
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
