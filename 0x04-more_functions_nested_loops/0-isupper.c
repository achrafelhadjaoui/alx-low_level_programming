#include "main.h"

/**
 * _isupper - a function that checks for upper case
 * @c: a parameter in form of int
 *
 * Return: 1 if c is upper, and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
