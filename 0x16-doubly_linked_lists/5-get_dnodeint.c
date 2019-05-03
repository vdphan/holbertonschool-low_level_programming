#include "lists.h"

/**
 * get_dnodeint_at_index - find node at index.
 * @head: pointer to struct.
 * @index: the index of node.
 *
 * Return:  returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
