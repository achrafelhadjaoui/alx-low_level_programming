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

	i = 0;
	va_start(str, n);
	while (i < n)
	{
		if (str != NULL)
		{
			if (separator != NULL && i < n - 1)
			{
				printf("%s%s", va_arg(str, char*), separator);
			}
			else
				printf("%s", va_arg(str, char*));
		}
		else
			printf("(nil)%s", separator);
		i++;
	}
	printf("\n");
	va_end(str);
}
