#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised of the pow of y.
 * @x: the number
 * @y: the power
 *
 * Return: x, or If y is lower than 0, the function should return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y != '\0')
		return (x * _pow_recursion(x, y - 1));
	return (x);
}
