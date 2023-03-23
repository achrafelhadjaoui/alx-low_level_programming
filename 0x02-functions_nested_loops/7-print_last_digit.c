#include "main.h"
/**
 * print_last_digit - a function that print the last digit of a number
 * @i: the only parameter in form of int
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	i = i % 10;
	_putchar('0' + i);
	return (i);
}
