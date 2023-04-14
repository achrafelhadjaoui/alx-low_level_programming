#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: the number of elements
 * @size: size of elements
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		while (ptr[i] < nmemb)
		{
			ptr[i] = 0;
			i++;
		}
		return (ptr);
	}
	return (0);
}
