#include "lists.h"

/**
 * get_nodeint_at_index -  the nth node of a listint_t linked list.
 * @head: pointer to struct.
 * @index: the index of node.
 *
 * Return: return the node at index position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
