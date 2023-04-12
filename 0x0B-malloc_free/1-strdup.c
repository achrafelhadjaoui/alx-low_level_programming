#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter.
 *  @str: the address that holds the string
 *
 *  Return: Returns NULL if str = NULL
 *  On success, the _strdup function returns a pointer to the duplicated
 *  string. It returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i;
	int _len;

	i = 0;
	_len = 0;
	if (str == NULL)
		return (0);
	while (str[_len] != '\0')
		_len++;
	str_dup = malloc((_len + 1) * sizeof(char));
	if (str_dup != NULL)
	{
		while (str[i] != '\0')
		{
			str_dup[i] = str[i];
			i++;
		}
		str_dup[i] = '\0';
		return (str_dup);
	}
	return (0);


}
