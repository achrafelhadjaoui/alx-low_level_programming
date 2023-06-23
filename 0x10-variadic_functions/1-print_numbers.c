#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of int passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
