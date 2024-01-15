#include "main.h"

/**
 * _strncpy - a function tha copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
