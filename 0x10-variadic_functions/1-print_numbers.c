#include <stdarg.h>
#include"variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers followed by a new line
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		if (separator != NULL && i < n - 1)
		{
			printf("%d%c ", va_arg(ptr, int), *separator);
		}
		else
			printf("%d ", va_arg(ptr, int));
		i++;
	}
	printf("\n");
	va_end(ptr);
}
