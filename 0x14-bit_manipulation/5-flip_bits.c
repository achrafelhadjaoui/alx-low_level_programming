#include "main.h"

/**
 * flip_bits - function
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int val;
	unsigned long int nm = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		val = nm >> i;
		if (val & 1)
			j++;
	}

	return (j);
}
