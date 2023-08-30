#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data
 * @head: the prameter
 *
 * Return: the sumof all the data
 * if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
