#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - a function ----
 * @c: a char variable
 *
 * Return: an int.
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
