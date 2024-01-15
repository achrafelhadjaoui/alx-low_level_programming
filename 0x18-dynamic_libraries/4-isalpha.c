#include "main.h"
/**
 * _isalpha - is a function that checks for alphabetic character
 * @c: is the only argument in form of int
 *
 * Return: the function return 1 is a letter and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
