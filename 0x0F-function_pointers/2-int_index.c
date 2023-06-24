#include "function_pointers.h"

/**
 * int_index - a function that search for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: is a pointer function
 *
 * Return: the first element for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL && cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
