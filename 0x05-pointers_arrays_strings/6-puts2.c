#include "main.h"

/**
 * puts2 - a function that print every other character of a string
 * @str: the parameter
 */

void puts2(char *str)
{
	int i;

	i = 0;
	_putchar(str[i]);
	i = i + 1;
	while (str[i++] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
