#include "main.h"

/**
 * puts_half - a function that print a half of a string
 * @str: the param
 */

void puts_half(char *str)
{
	int j;
	int n;

	j = 0;
	while (str[j] != '\0')
		j++;
	n = j / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
