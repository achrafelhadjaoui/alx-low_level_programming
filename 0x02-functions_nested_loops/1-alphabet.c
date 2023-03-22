#include "main.h"
/**
* my_function - does my stuff
* @my_arg: its mine damnit
*
* Does my stuff explained.
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
