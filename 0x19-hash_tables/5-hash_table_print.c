#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int flag = 0;
	hash_node_t *node = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				if (flag != 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
				node = node->next;
			}
		}
		printf("}\n");
	}
}
