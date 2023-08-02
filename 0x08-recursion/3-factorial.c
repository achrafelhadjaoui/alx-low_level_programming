#include "main.h"

/**
 * factorial - factorial func
 * @n: the variable
 *
 * Return: the factorial of a given number
 * If n is lower than 0, the function should return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else
		return (n * factorial(n - 1));
}
