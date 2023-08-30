#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delets the node at index
 * @head: first parameter
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *ptr;
	unsigned int count;

	ptr = *head;
	count = 0;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (count < (index - 1))
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
		count++;
	}

	del = ptr->next;
	ptr->next = del->next;
	free(del);
	return (1);
}
