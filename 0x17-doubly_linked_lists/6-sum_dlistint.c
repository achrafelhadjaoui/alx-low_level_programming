#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * data of a dlistint_t linked list.
 * @head: pointer to dlistint_t
 *
 * Return: the sum of all data
 * if the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
