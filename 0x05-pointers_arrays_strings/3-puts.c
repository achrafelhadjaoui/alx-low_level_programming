#include "main.h"

/**
 * _puts - a function that print a string
 * @str: the only parameter
 */

void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
