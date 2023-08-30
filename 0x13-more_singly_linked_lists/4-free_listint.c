#include "lists.h"

/**
 * free_listint - a function that frees a listint_t
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *dell;

	ptr = head;
	while (ptr != NULL)
	{
		dell = ptr->next;
		free(ptr);
		ptr = dell;
	}
}
