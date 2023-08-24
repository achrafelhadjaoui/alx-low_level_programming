#include "lists.h"

/**
 * print_list - a function that prints all elements of a list
 * @h: parameter
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
		{
			printf("[0] (nil)\n");
			i++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			i++;
		}
		h = h->next;
	}
	return (i);
}
