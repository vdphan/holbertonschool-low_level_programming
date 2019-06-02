#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp, *node;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				tmp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
