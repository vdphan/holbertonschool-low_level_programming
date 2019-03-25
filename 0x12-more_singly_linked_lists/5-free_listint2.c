#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer that points to struct.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
