#include "search_algos.h"

/**
 * binary_search - a function that search for a value in array
 * of integers using the binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of element in array
 * @value: is the value to search for
 *
 * Return: the index where the value is located
 * if the value not present or the array is NULL  return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	start = 0;
	end = size;

	if (!array)
		return (-1);

	while (start < end)
	{
		size_t i = start;

		printf("Searching in array: ");
		while (i < end)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("\n");
		mid = (start + end) / 2;

		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else if (array[mid] == value)
			return (mid);
		else if (start == end)
			return (-1);
	}
	return (-1);

}
