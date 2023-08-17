#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @name: first prametre
 * @age: second parameter
 * @owner: third parameter
 * @d: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
