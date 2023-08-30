#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * @head: first parameter
 * @index: the index of node, starting at 0
 *
 * Return: the nth node of a linked list
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;
	while (count < index && ptr->next != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	if (count != index)
		return (NULL);

	else
		return (ptr);
}
