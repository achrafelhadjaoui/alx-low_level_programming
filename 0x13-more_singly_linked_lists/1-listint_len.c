#include "lists.h"

/**
 * listint_len - a function that return the number of elements
 * @h: points to node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
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
