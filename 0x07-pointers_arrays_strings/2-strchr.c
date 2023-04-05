#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string
 * @c: the character that we looking for
 *
 * Return: a pointer to the occurrence of the chracter c in the
 * string, or null the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (s + i);
}
