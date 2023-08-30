#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * @head: parameter
 *
 * Return: returns the head node, or if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
		return (0);

	ptr = *head;
	i = ptr->n;
	free(ptr);

	*head = (*head)->next;
	return (i);
}
