#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that free a list
 * @head: point to node
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *other;

	ptr = head;
	while (ptr != NULL)
	{
		other = ptr->next;
		free(ptr);
		ptr = other;
	}
	head = NULL;
}
