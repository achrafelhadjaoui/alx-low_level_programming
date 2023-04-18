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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}