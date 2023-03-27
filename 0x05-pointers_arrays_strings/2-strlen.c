#include "main.h"

/**
 * _strlen - a function that count the length
 * @s: the only parameter
 *
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
