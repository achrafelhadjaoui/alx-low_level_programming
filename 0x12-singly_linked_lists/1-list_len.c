#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: a parameter
 *
 * Return: return the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
