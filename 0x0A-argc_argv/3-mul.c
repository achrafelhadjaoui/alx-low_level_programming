#include "main.h"
#include <stdio.h>

int change(char *c);
int mul(int ope1, int ope2);

/**
 * main - the main function
 * @argc: the counting arguments
 * @argv: responsible for the arguments of the characters
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fn, sn, res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	fn = change(argv[1]);
	sn = change(argv[2]);
	res = mul(fn, sn);
	printf("%d\n", res);
	return (0);
}

/**
 * change - a function that change a number from a charcter into int
 * @c: the address that holds the number as a character
 *
 * Return: an int
 */

int change(char *c)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	if (*c == '-')
	{
		sign = sign * -1;
		c++;
	}
	while (*c != '\0')
	{
		num = num * 10 + (*c - 48);
		c++;
	}
	return (num * sign);
}

/**
 * mul - a function that multiplies two numbers
 * @ope1: the first variable
 * @ope2: the second variable
 *
 * Return: the result of the multiplication
 */

int mul(int ope1, int ope2)
{
	return (ope1 * ope2);
}
