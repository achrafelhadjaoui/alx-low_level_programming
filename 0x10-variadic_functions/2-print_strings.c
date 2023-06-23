#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *str;
	unsigned int i;

	i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
