#include <unistd.h>
#include "main.h"
/**
 * _puts - a function that print a string
 * @s: pointer to char
 *
 * Return: void
 */

void _puts(char *s)
{
	for (int i = 0; s[i]; i++)
	{
		write(1, &s[i], 1);
		i++;
	}
}
