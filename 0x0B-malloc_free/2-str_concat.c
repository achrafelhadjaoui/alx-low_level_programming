#include "main.h"

char *concat(char *src, char *dest);

int _len(char *c);

/**
 * str_concat - a functionthat concatonates two strings.
 * @s1: the first string
 * @s2: the seconde string
 *
 * Return: a pointer to newly allocated space which contain s1 followed by s2
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count = _len(s1) + _len(s2);
	ptr = malloc(sizeof(char) * count + 2);
	if (ptr == NULL)
		return (NULL);
	ptr = concat(s1, s2);
	return (ptr);
}


/**
 * _len -  a function that counts the length of a string
 * @c: the address that holds the string
 *
 * Return: the length
 */

int _len(char *c)
{
	int count;

	count = 0;
	while (c[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * concat - a function that concatonate two strings
 * @src: the first string
 * @dest: the seconde string
 *
 * Return: dest
 */

char *concat(char *src, char *dest)
{
	int length, i;

	i = 0;
	length = _len(dest);
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
