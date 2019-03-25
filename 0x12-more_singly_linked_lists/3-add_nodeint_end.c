#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer that point to struct.
 * @n: const integer value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		(*head) = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);
}
