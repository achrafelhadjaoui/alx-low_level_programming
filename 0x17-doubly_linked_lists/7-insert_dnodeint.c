#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a node at fiven position
 * @h: point to pointer to dlistint_t
 * @idx: is the indexof the new list where the new node should be added
 * @n: the added data
 *
 * Return:  the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add th
 * new node and return NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL;
	dlistint_t *tmp = *h;
	dlistint_t *tmp1;

	if (*h == NULL)
		(new = add_dnodeint(h, n));

	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			tmp1 = tmp->next;
			new->next = tmp1;
			new->prev = tmp;
			tmp1->prev = new;
			tmp->next = new;
			new->n = n;
			break;
		}
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		new = add_dnodeint_end(h, n);

	return (new);
}
