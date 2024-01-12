#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns ther nth
 * of a dlistint_t linked list.
 * @head: pointer to dlistint_t.
 * @index: is the indexof the node
 *
 * Return: the nth node
 * if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
