#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: size of the array
 * @c: the character
 *
 * Return: Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	while (*ptr != '\0')
	{
		*ptr = c;
		ptr++;
	}
	return (ptr);
}
