#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at the end of a listint_t
 * @head: first parameter
 * @n: second parameter
 *
 * Return: the address of a new element, or NULL if it failled.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	else
	{
		listint_t *current;

		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new;
	}
	return (new);
}
