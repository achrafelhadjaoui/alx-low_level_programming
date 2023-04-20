#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that search for an integer
 * @array: an array
 * @size: is the number of elements in the array
 * @cmp: a pointer to the function
 *
 * Return: int_index returns the index of the first element for which th
 * cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
