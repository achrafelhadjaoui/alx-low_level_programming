#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 * @array: an array
 * @size: size of the array
 * @action: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
