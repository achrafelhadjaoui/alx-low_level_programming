#include "lists.h"

/**
 * delete_dnodeint_at_index - a funcion tha deletes the node at index
 * @head: a pointer to pointer to dlistint_t.
 * @index: is the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *tmp1;
	unsigned int i = 0;

	if (tmp != NULL)
		while (tmp->prev != NULL)
			tmp = tmp->prev;

	while (tmp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tmp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp1->next = tmp->next;

				if (tmp->next != NULL)
					tmp->next->prev = tmp1;
			}

			free(tmp);
			return (1);
		}
		tmp1 = tmp;
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
