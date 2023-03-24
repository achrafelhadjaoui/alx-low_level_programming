#include "main.h"

/**
 * print_most_numbers - a function that print numbers from 0 to 9
 * exception the 2 and 4 numbers.
 */

void print_most_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			a++;
		}
		else
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}
