#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at given index
 * @n: the first parameter
 * @index: second parameter
 *
 * Return: the value of th ebit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index);
	result = (result & 1);

	return (result);

}
