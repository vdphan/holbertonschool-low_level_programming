#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index position.
 * @head: pointer to a pointer that point to struct.
 * @index: the index of the node that should be deleted.
 *
 * Return:  1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (count == index - 1)
		{
			free(tmp->next);
			tmp->next = tmp->next->next;
		}
		count++;
		tmp = tmp->next;
	}
	if (count > index || tmp == NULL)
		return (-1);
	return (1);
}
