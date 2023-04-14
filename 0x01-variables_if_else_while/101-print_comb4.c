#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combination of three digits.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
