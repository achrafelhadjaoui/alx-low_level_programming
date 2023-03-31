#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;


	i = 0;
	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
