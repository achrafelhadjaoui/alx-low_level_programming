#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format:  is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *str;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				j = 0;
				break;
			case 's':
				str = va_arg(ptr, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
