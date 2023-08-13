#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - a function that concatonates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters
 *
 * Return: a pointer to a new allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, i, len_s2, j;
	char *ptr;

	len_s1 = 0;
	len_s2 = 0;
	i = 0, j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	ptr = malloc(sizeof(char) * (len_s1 + 1 + n));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
