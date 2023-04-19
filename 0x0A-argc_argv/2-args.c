#include "main.h"
#include <stdio.h>

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
	int i;

	i = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
