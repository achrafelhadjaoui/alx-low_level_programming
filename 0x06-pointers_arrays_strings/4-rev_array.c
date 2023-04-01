#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 * @a: an array of inyegers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = a[n - 1];
		a[n - 1] = a[i];
		a[i] = j;
		i++;
		n--;
	}
}
