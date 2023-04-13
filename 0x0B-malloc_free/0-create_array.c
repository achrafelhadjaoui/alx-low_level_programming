#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: number of characters
 * @c: a varaible that holds the character
 *
 * Return: a pointer to the array, or NULL if it fails, or NULL
 * if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (0);

	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (0);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);

}