#include "main.h"

/**
 * cap_string - a function that capitalizes
 * all words of a string
 * @str: the parameter
 *
 * Return: str.
 */

char *cap_string(char *str)
{
	int i;
	char *p;

	p = str;
	i = 0;
	if (p[i] >= 97 && p[i] <= 122)
		p[i] = p[i] - 32;
	while (p[i] != '\0')
	{
		if (p[i] == 9)
			p[i] = p[i] + 23;
		if ((p[i] >= 9 && p[i] <= 10) || (p[i] >= 32 && p[i] <= 34)
			|| (p[i] >= 40 && p[i] <= 41) || (p[i] == 44) || (p[i] == 46)
			|| (p[i] == 59) || (p[i] == 63) || (p[i] == 123) || (p[i] == 125))
		{
			if (p[i + 1] >= 97 && p[i + 1] <= 122)
				p[i + 1] = p[i + 1] - 32;
			i++;
		}
		else
			i++;
	}
	return (p);
}
