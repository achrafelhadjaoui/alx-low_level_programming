#include "main.h"

int _pow(int x, int y);

/**
 * binary_to_uint - a function that cinverts a binary number to uint
 * @b: the parameter
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL .
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int power = 0;
	unsigned int result  = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (!(b[i] >= '0' && b[i] <= '1'))
			return (0);
		i++;
	}

	while (--i >= 0)
	{
		result = result + (b[i] - '0') * (_pow(2, power));
		power++;
	}
	return (result);
}


/**
 * _pow - a power function
 * @x: the base variable
 * @y: the exponent variable
 *
 * Return: the value of x raised to the power of y
 */

int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}
