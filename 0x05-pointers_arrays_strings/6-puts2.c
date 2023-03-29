#include "main.h"

/**
 * puts2 - a function that print every other character of a string
 * @str: the parameter
 */

void puts2(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
