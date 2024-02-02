#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(size);
	if (table == NULL)
		return (NULL);

	return (table);
}
