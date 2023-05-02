#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning of a list
 * @head: points to node
 * @n: added number
 * Return: Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
