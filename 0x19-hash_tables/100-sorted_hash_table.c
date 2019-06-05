#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	if (size <= 0)
		return (NULL);
	new = calloc(1, sizeof(shash_table_t));
	if (!new)
		return (NULL);
	new->array = calloc(size, sizeof(shash_node_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	return (new);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *cur = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (!ht || !key || !*key || !value)
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
			return (1);
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
	php_sort(ht, cur);
	return (1);
}

int php_sort(shash_table_t *ht, shash_node_t *cur)
{
	shash_node_t *newt;

	if (!ht->shead)
	{
		ht->shead = cur;
		ht->stail = cur;
		cur->sprev = NULL;
		cur->snext = NULL;
		return (1);
	}
	newt = ht->shead;
	while (newt)
	{
		if (strcmp(newt->key, cur->key) < 0)
		{
			cur->snext = newt->next;
			if (newt->snext)
				newt->snext->sprev = cur;
			newt->snext = cur;
			cur->sprev = newt;
		}
		else
		{
			if (newt->sprev == NULL)
			{
				cur->sprev = newt->sprev;
				newt->sprev = cur;
				cur->snext = newt;
			}
		}
		if (newt->next == NULL)
			break;
		newt = newt->snext;
	}
	ht->stail = newt;
	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;
	unsigned long int i = 0;

	if (!ht || !key || !*key)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *node = NULL;

	if (ht && ht->shead)
	{
		printf("{");
		node = ht->shead;
		while (node)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
		printf("}\n");
	}
}

void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *node = NULL;

	if (ht && ht->stail)
	{
		printf("{");
		node = ht->stail;
		while (node)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->sprev;
		}
		printf("}\n");
	}
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;
	shash_node_t *tmp, *node;

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
