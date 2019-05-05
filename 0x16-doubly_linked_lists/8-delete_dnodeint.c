#include "lists.h"
#include "lists.h"

/**
 * len - calculate double linked list len.
 * @h:  pointer to head.
 *
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to the pointer that points to head.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *hold = NULL;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		if (len(*head) > 1)
			(*head)->prev = NULL;
		return (1);
	}
	if (index >= len(*head))
		return (-1);
	while (tmp)
	{
		if (count == index - 1)
		{
			hold = tmp->next->next;
			free(tmp->next);
			tmp->next = hold;
			hold->prev = tmp;
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
