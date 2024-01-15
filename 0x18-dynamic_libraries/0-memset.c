#include "main.h"

/**
 * _memset - a function that fills a memory with a constant byte
 * @s: this is a pointer of the memory location
 * @b: this is the parameter that hold the the value that is
 * to be copied
 * @n: this is size which will fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
