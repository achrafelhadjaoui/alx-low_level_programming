#include "main.h"

/**
 * print_square - function that draws
 * @size: the parameter in form of int
 */

void print_square(int size)
{
	int num;
	int dist;

	num = 0;
	while (num < size)
	{
		dist = 0;
		while (dist <= size)
		{
			_putchar('#');
			dist++;
		}
		_putchar('\n');
		num++;
	}
	if (size <= 0)
		_putchar('\n');
}
