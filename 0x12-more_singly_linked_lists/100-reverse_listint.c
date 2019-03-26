#include "lists.h"

/**
 * reverse_listint - everses a listint_t linked list.
 * @head: pointer of the pointer that points to structs.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *store = NULL;

	while (*head)
	{
		store = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = store;
	}
	(*head) = tmp;
	return (*head);
}
