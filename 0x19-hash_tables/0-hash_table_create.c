#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size <= 0)
		return (NULL);
	new = calloc(1, sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->array = calloc(size, sizeof(hash_node_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	return (new);
}
