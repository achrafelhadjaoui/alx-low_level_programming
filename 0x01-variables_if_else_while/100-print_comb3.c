#include <stdio.h>

/**
 * main - a program that prints all possible different combination
 * of two digits.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int d;

	i = 0;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			d = i + 48;
			k = j + 48;
			putchar(d);
			putchar(k);
			if (i != 8)
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
