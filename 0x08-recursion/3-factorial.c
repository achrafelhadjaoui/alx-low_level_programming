#include "main.h"

/**
 * factorial - a function that returns the factorial
 * of a given number.
 * @n: the variable that hold the given number
 *
 * Return: n, or If n is lower than 0, the function should return -1
 * and if it is equal to 0, the function should return 1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
