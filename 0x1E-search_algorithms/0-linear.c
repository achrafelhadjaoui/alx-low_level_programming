#include "search_algos.h"

/**
 * linear_search - a function that search for a value in array
 * of integers using the linear search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of element in array
 * @value: is the value to search for
 *
 * Return: the index where the value is located
 * if the value not present or the array is NULL  return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			i++;
		}
	}

	return (-1);
}
