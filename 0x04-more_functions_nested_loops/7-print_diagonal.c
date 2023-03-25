#include "main.h"

/**
 * print_diagonal - function that draws
 * @n: the parameter in form of int
 */

void print_diagonal(int n)
{
	int num;

	num = 0;
	while (num < n)
	{
		if (num == (n - 1))
			putchar('\\');
		else
		{
			_putchar(' ');
			num++;
		}
	}
	_putchar('\n');
}
