#include "main.h"

/**
 * _islower - a function that checks for lower case character
 * @c: the only argument in form of int
 *
 * Return: 1 if c is lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
