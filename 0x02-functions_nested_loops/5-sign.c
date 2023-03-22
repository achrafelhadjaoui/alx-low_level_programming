#include "main.h"
/**
 * print_sign - a function that print the sign of a number
 * @n: the only parameter in form of int
 *
 * Return: the function return 1 if n greater than 0, and 0 if n is 0,
 * and  -1 if n less than 0
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
