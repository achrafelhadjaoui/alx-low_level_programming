#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: all of its parameters
 * If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, sum;

	i = 0;
	if (n == 0)
		return (0);
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
