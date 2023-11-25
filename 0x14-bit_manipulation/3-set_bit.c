#include "main.h"

/**
 * set_bit - a funcion that sets the value of a bit to 1 at a given index
 * @n: first parameter
 * @index: second parameter
 *
 * Return: 1 if worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int result = 0;

	if (index > 63)
		return (-1);

	result = (1 << index);
	*n = (result | *n);
	return (1);
}
