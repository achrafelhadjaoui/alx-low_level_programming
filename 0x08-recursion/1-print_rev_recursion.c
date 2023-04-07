#include "main.h"

/**
 * _print_rev_recursion - a function that print a string
 * in reverse.
 * @s: the address that hold the string
 */

void _print_rev_recursion(char *s)
{
	if (*s < '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (*s == 0)
		return;
}
