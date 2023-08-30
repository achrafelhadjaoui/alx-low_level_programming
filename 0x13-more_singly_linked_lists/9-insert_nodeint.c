#include "lists.h"

/**
 * insert_nodeint_at_index - a fuew node at given position
 * @head: first parameter
 * @idx: the index of the list where the new nodebe added. Index starts at 0
 * @n: --------
 * Return: Returns: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	count = 0;
	ptr = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}

	while (count < (idx - 1))
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
		count++;
	}

	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
