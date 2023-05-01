#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - a function that adds a new node at the beginning
 * @head: first pointer
 * @str: second pointer
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
