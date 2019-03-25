#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head:pointer to a pointer that point to struct.
 * @n: conts integer value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = (listint_t *) malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = (*head);
	(*head) = new_head;
	return (new_head);
}
