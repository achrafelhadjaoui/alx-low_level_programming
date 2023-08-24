#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: first parameter
 * @str: second parameter
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	head = malloc(sizeof(list_t));
	if (head == NULL)
	{
		free(*head);
		return (NULL);
	}
	head = 
}
