#include "main.h"
#include <stdio.h>

int _toint(char *n);

/**
 * main - a program that print its name.
 * @argc: a variable refers to the number of arguments passed
 * @argv: is a pointer array which points to each argument passed to the
 * program.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", _toint(argv[1]) * _toint(argv[2]));
	}
	return (0);
}

/**
 * _toint - a function that converts charcter to int.
 * @n: the address that holds the given characters.
 *
 * Return: the cnverted int.
 */

int _toint(char *n)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (n[i] != '\0')
	{
		res = (res * 10) + (n[i] - 48);
		i++;
	}
	return (res);
}
