#ifndef DOG_H
#define DOG_H


/**
 * struct dog - information about dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

struct dog{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

		/* prototypes */


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/* we can't use the concept NULL for flaot
 * so we cheeck it by  compare it with -1.0
 */
#define NULL_AGE -1.0

#endif
