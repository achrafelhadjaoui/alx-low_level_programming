#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * @argc: the arguments counting
 * @argv: rsponsible of character of the arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
