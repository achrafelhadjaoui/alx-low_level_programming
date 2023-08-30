#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * @h: the parameter
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
