#include "lists.h"

/**
 * add_nodeint - a function that add new node at the beginning of list
 * @head: first parameter
 * @n: seconde parameter
 *
 * Return: the address of the new element, or NULLL if it failled
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
