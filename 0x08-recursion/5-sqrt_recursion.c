#include "main.h"

int helper(int number, int finder);

/**
 * _sqrt_recursion - square root function
 * @n: the number
 *
 * Return: the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(n, 0));
}

/**
 * helper - a function that helps to find the square root
 * @number: the given number
 * @finder: helper number
 *
 * Return: the square root
 */

int helper(int number, int finder)
{
	if ((finder * finder) > number)
		return (-1);
	else if ((finder * finder) == number)
		return (finder);
	else
		return (helper(number, finder + 1));
}
