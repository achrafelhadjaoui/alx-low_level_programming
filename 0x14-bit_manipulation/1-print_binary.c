#include "main.h"
#include <math.h>


/**
 * print_binary - a function that prints the binary represenatation of a num
 * @n: the parameter
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int val;

	for (i = 63; i >= 0; i--)
	{
		val = n >> i;

		if (val & 1)
		{
			_putchar('1');
			j++;
		}

		else if (j)
			_putchar('0');
	}
	if (!val)
		_putchar('0');


}
