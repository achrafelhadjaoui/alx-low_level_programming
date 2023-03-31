#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: the parameter
 *
 * Return: str.
 */

char *leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 52;
			i++;
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 51;
			i++;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 48;
			i++;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 55;
			i++;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 49;
			i++;
		}
		else
			i++;
	}
	return (str);
}
