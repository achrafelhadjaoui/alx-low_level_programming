#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: a parameter in form of int
 *
 * Return: 1 if c is a digit, and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
