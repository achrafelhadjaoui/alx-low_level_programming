#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: a pointer to dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
