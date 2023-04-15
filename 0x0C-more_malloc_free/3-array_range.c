#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: a variable that holdes the min value
 * @max: a variable that holdes the max value
 *
 * Return: a pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int res;
	int i;

	i = 0;
	res = max - min;
	if (min > max)
		return (0);
	ptr = malloc(res * sizeof(int));
	if (ptr != NULL)
	{
		while (min < max)
		{
			ptr[i] = min;
			min++;
			i++;
		}
		return (ptr);
	}
	return (0);
}
