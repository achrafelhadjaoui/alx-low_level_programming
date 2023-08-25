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
	list_t *temp;

	if (head == NULL || str == NULL)
		return (0);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = _strlen(temp->str);
	temp->next = *head;

	*head = temp;

	return (temp);	
}


/**
 * _strlen - a function
 * @str: parameter
 *
 * Return: the length
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
