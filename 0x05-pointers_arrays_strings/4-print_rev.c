#include "main.h"

/**
 * print_rev - a function that print a string in reverse
 * @s: the only parameter
 */

void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	count = count - 1;
	while (s[count] != 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
