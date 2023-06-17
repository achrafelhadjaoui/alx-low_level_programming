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
	int *ptr, val, i;

	val = (max - min) + 1;
	i = 0;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * val);
	if (ptr == NULL)
		return (NULL);
	while (i < val)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
