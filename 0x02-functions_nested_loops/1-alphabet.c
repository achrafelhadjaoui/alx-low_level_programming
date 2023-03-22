#include "main.h"
/**
 *print_alphabet-is a function
 *that print the alphabet in
 *lower case following by a new line
 */
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
