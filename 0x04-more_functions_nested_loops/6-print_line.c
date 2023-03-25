#include "main.h"

/**
 * print_line - function that draw
 * @n: the parameter in form of int
 */

void print_line(int n)
{
	int num;

	num = 0;
	while (num < n)
	{
		_putchar('_');
		num++;
	}
	_putchar('\n');
}
