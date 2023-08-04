#include "main.h"
#include <stdio.h>

int cheek(char *number);
int change_to_int(char *nm);

/**
 * main - the main function
 * @argc: the arguments counter
 * @argv: responsible on the the arguments characters
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int cheek_res, change_res, result;

	result = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	argv++;
	while (*argv != NULL)
	{
		cheek_res = cheek(*argv);
		if (cheek_res == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			change_res = change_to_int(*argv);
			result = result + change_res;
		}
		argv++;
	}
	printf("%d\n", result);
	return (0);
}

/**
 * cheek - a function that cheeks for a non number
 * @number: address that holds the passed number
 *
 * Return: 1 if a non number exist, and 0 if not
 */

int cheek(char *number)
{
	while (*number != '\0')
	{
		if (!(*number >= 48 && *number <= 57))
			return (1);
		number++;
	}
	return (0);
}

/**
 * change_to_int - a function that change passed number as a character to int
 * @nm: the address that holds the number
 *
 * Return: the int number
 */

int change_to_int(char *nm)
{
	int res;

	res = 0;
	while (*nm != '\0')
	{
		res = res * 10 + (*nm - 48);
		nm++;
	}
	return (res);
}
