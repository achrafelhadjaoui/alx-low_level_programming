#include "lists.h"

/**
 * free_listint2 - a function yhat frees a list
 * @head: points to node.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *i;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		i = ptr->next;
		free(ptr);
		ptr = i;
	}
	*head = NULL;
}
