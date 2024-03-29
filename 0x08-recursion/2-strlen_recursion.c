#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string
 * @s: the address that holds the string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
