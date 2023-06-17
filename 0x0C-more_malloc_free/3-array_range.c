#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: the min int
 * @max: the max int
 *
 * Return: pointr to hte newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, val;

	val = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * val);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
