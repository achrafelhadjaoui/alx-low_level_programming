#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the address that holds the name
 * @f: is a pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
