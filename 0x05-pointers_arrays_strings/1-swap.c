#include "main.h"

/**
 * swap_int - a swap function
 * @a: the first parameter
 * @b: the second parameter
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
