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

	j = 'a';
	while (j <= 'z')
	{
		if (j == 'e' || j == 'q')
			j++;
		else
		{
			putchar(j);
			j++;
		}
	}
	putchar('\n');
	return (0);
}
