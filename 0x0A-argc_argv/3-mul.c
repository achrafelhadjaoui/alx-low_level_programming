#include "main.h"
#include <stdio.h>

int change(char *c);
int mul(int ope1, int ope2);

/**
 * thr main function
 * @argc: the counting arguments
 * @argv: responsible for the arguments of the characters
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int fn, sn, res;
	if (argc < 3 )
	{
		printf("Error\n");
		return (1);
	}
	fn = change(argv[1]);
	sn = change(argv[2]);
	res = mul(fn, sn);
	printf("%d\n", res);
}

int change(char *c)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	if (*c == '-')
		sign = sign * -1;
	while (!c)
	{
		num = num * 10 + (*c - 48);
		*c++;
	}
	return (num * sign);
}

int mul(int ope1, int ope2)
{
	return(ope1 * ope2);
}
