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
		dist = num;
		while (dist < n)
		{
			if (dist == n - 1)
				_putchar('\\');
			else
				_putchar(' ');
			dist++;
		}
		_putchar('\n');
		num++;
	}
	if (n <= 0)
		_putchar('\n');
}
