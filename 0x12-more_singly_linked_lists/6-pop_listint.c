#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer that points to struct.
 *
 * Return: returns the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (*head == NULL)
		return (0);
	a = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (a);
}
