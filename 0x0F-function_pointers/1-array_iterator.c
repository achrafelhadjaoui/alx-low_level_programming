#include "function_pointers.h"

/**
 * array_iterator- a function that execute a function given as a parameter
 * @array: address that holds the array
 * @size: size of the array
 * @action: is a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
