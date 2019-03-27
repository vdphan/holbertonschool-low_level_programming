#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to struct.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	}
	return (count);
}
