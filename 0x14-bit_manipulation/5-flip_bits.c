#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the first parameter
 * @m: second parameter
 *
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int result = n ^ m;
	unsigned long int number;

	while (i >= 0)
	{
		number = result >> i;
		if ((number & 1) == 1)
			count++;
		i--;
	}
	return (count);
}
