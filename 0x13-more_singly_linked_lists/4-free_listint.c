#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that free a list
 * @head: point to node
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	head = NULL;
}
