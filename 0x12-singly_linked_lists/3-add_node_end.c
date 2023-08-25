#include "lists.h"
unsigned int _strlen(const char *str);

/**
 * add_node_end - a function that adds a new node at the end of a node
 * @head: first parameter
 * @str: second parameter
 *
 * Return: the address of the new element, or NULL if it failled
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	if (str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = NULL;

		if (*head == NULL)
		{
			*head = temp;
			return (*head);
		}
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
				ptr = ptr->next;

			ptr->next = temp;
			return (ptr);
		}
	}
	return (NULL);
}

/**
 * _strlen - a function
 * @str: ...
 *
 * Return: ...
 */

unsigned int _strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
