#include <stdio.h>

/**
 * main - a program that prints all possible different combination
 * of two digits.
 *
 * Return: 0
 */

int main(void)
{
	char i;
	char j;

	i = '0';
	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
