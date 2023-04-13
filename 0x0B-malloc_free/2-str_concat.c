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
	int k;
	int d;

	d = 0;
	k = 0;
	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		i++;
	cc = malloc((i + 6) * sizeof(char));
	if (cc != NULL)
	{
		while (s1[k] != '\0')
		{
			cc[k] = s1[k];
			k++;
		}
		while (s2[d] != '\0')
		{
			cc[k] = s2[d];
			d++;
			k++;
		}
		cc[k] = '\0';
		return (cc);
	}
	return (0);
}
