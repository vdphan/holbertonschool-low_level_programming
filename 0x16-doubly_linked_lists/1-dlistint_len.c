#include "lists.h"

/**
 * dlistint_len - calculate double linked list len.
 * @h:  pointer to head.
 *
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
