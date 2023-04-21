#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *ptr_str;

	i = 0;
	va_start(str, n);
	while (i < n)
	{
		ptr_str = va_arg(str, char*);
		if (ptr_str == NULL)
			printf("(nil)");
		else
			printf("%s", ptr_str);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(str);
}
