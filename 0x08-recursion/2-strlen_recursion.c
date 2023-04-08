#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the addresse that hold the string
 *
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
