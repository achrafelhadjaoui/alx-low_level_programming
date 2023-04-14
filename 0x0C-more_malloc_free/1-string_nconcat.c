#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that cincatonates two strings
 * @s1: the address of the destination
 * @s2: the address of the source
 * @n: number of character that we will copied
 *
 * Return: a pointer to newly allocated space in memory
 * if the function fails it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int d;

	d = 0;
	k = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr != NULL)
	{
		while (s1[k] != '\0')
		{
			ptr[k] = s1[k];
			k++;
		}
		while (d < j)
		{
			ptr[k] = s2[d];
			k++;
			d++;
		}
		ptr[k] = '\0';
		return (ptr);
	}
	return (0);
}
