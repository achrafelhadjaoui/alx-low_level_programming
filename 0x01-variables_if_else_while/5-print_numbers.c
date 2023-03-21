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
	char j;

	j = '0';
	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
