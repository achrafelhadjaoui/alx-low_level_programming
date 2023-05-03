#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: points to node
 * @n: variable of type int
 *
 * Return: Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nb;
	listint_t *tmp;

	nb = malloc(sizeof(listint_t));
	if (nb == NULL)
		return (NULL);
	nb->n = n;
	nb->next = NULL;
	if (*head == NULL)
		*head = nb;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nb;

	}
	return (nb);
}
