#include "main.h"

/**
 * binary_to_uint - a function that convert a binary nmb to an u.int
 * @b: is the parameter
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result;

	i = 0;
	result = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		result = result * 2 + b[i] - '0';
		i++;
	}
	return (result);
}
