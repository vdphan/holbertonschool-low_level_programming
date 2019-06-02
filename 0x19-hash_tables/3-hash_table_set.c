#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cur = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (!ht || !key || !*key || value)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	for (; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
		}
	}
	cur = malloc(sizeof(hash_node_t));
	if (!cur)
		return (0);
	cur->key = strdup(key);
	if (!cur->key)
	{
		free(cur);
		return (0);
	}
	cur->value = strdup(value);
	if (!cur->value)
	{
		free(cur->key);
		free(cur);
		return (0);
	}
	cur->next = ht->array[i];
	ht->array[i] = cur;
	return (1);
}
