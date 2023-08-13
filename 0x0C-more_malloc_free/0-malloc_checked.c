#include "main.h"

/**
 * malloc_checked - a function that allocates memory
 * @b: the size
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
