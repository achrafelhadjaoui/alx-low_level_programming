#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: this is the address where we will copied
 * @src: this is the address we will copied from
 * @n: thw size we will copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
