#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that reurns the sum of all its parameters.
 * @n: a variable represent number of arguments that we will pass to
 * this function.
 *
 * Return: the sum of allparameters, and return 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list args;

	sum = 0;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
