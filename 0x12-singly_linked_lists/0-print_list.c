#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list
 * @h: a pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
