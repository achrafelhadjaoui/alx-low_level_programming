#include "main.h"
/**
 * _abs - a function that compute the absolute
 * value of an integer.
 * @j: the function take argument from type int
 *
 * Return: the function return the absolute value of the argument.
 */
int _abs(int j)
{

	if (j < 0)
	{
		j = j * -1;
	}
	else
		j = j * 1;
	return (j);
}
