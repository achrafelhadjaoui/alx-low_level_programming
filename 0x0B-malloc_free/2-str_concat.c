#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatonates two strings
 * @s1: the address that holdes the concatonated string
 * @s2: the address that holdes the source string
 *
 * Return: a pointer to the concatonated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *cc;
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (s1[i] != '\0')
		i++;
	j = i;
	while (s2[i] != '\0')
		i++;
	cc = malloc((i + 1) * sizeof(char));
	if (cc != NULL)
	{
		_putchar('N');
		while (s2[k] != '\0')
		{
			_putchar('F');
			s1[j] = s2[k];
			j++;
			k++;
		}
		s1[j] = '\0';
		return (s1);
	}
	return (0);
}
