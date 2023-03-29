#include "main.h"

/**
 * _strcpy - a function that copie a string
 * @dest: first param
 * @src: second param
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
