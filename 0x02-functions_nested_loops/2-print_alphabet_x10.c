#include "main.h"
/**
 *print_alphabet_x10-is function
 *that print the alphabet in a lower
 *case 10 time in seperated line
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	i = 'a';
	j = 0;
	while (j < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
