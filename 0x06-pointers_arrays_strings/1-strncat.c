#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: return the dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
