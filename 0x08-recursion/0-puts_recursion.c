#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @s: the addresse that hold the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
