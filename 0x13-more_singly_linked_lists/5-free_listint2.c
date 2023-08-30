#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: prameter
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *new;

	ptr = *head;
	while (ptr != NULL)
	{
		new = ptr->next;
		free(ptr);
		ptr = new;
	}

	*head = NULL;
}
