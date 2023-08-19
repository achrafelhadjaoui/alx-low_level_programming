#include "3-calc.h"

/**
 * main - the start of the programe
 * @argv: agument vector
 * @argc: argument count
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	char operator;
	int calc, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];

	/* cheek if a second char is exist or cheek if it is NULL */
	if (operator == '\0' || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	calc = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", calc);
	return (0);
}
