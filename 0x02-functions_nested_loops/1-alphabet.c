#include "main.h"
/**
 * Function pirnt_alphabet - which print the alphabet
 * in lower case.
 *
 * Return: no return
 */

/* this the prototype of print_alphabet function */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
