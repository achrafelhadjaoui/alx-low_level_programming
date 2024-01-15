#include "main.h"

/**
 * _strcmp - a function that compare two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
