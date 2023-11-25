#include "main.h"

/**
 * clear_bit - a funcion that sets the value of a bit to 1 at a given index
 * @n: first parameter
 * @index: second parameter
 *
 * Return: 1 if worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (*n ^ (1 << index)) & *n;
	return (1);
}
