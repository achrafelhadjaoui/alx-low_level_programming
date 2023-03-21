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
	char i;

	j = 'a';
	i = 'A';
	while (i <= 'Z')
	{
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
