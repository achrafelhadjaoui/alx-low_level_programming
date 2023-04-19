#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable
 * dog - name of the structure
 * @dog: first element
 * @name: second element
 * @age: third element
 * @owner: forth element
 * @d: fifth element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
