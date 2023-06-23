#include "variadic_functions.h"

/**
 * print_all - a function that print anything
 * @format: a list of type of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *str;
	int i, bol;

	i = 0;
	va_start(ptr, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				bol = 0;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				bol = 0;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				bol = 0;
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				bol = 0;
				break;
			default:
				bol = 1;
				break;
		}
		if (format[i + 1] != '\0' && bol == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
