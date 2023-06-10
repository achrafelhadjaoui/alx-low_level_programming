#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * @argc: a variable that counts arguments
 * @argv: a double pointer that is responsible for characters of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
