#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: the parameter
 */

void rev_string(char *s)
{
	int count;
	int i;
	int j;
	char c;

	j = 0;
	count = 0;
	while (s[count] != '\0')
		count++;
	i = count;
	while (j != count / 2)
	{
		c = s[i - 1];
		s[i - 1] = s[j];
		s[j] = c;
		j++;
		i--;
	}
}
