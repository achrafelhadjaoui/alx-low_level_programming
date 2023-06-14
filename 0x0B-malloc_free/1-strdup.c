#include "main.h"

int _len(char *c);

void _strcpy(char *src, char *dest);

/**
 * _strdup - a function that returns a pointer to newly allocated space
 * @str: the address that holds the string.
 *
 * Return: return a pointer to a new string
 */

char *_strdup(char *str)
{
	char *ptr;
	int length;

	length = _len(str);
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * length + 1);
	if (ptr == NULL)
		return (NULL);
	_strcpy(str, ptr);
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
 * _strcpy - a function that copies a string
 * @src: the address the holds the string
 * @dest: the where ew will put the copied string
 *
 * Return: dest;
 */

void _strcpy(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
