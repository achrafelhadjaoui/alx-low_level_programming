#include "main.h"

/**
 * print_binary - a function that prints binary representation of a num
 * @n: the parameter
 */

void print_binary(unsigned long int n)
{
	int i = 63;
	int result, check = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i >= 0)
	{
		result = n >> i;

		if ((result & 1) == 1)
		{
			_putchar('1');
			check = 1;
		}
		else if (check == 1)
			_putchar('0');
		i--;
	}
}
