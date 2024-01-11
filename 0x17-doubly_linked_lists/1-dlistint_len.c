#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to dlistint_t
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
