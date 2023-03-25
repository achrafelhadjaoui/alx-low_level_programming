#include "main.h"

/**
 * more_numbers - function that print numbers
 */

void more_numbers(void)
{
	int num;
	int res;
	int swt;
	int inc;

	inc = 0;
	while (inc < 10)
	{
		num = 0;
		while (num <= 14)
		{
			res = num / 10;
			swt = num % 10;
			if (num > 9)
			{
				_putchar(res + '0');
			}
			_putchar(swt + '0');
			num++;
		}
		_putchar('\n');
		inc++;
	}
}
