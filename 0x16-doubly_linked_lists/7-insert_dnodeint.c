#include "lists.h"
#include "lists.h"

/**
 * dlistint_len - calculate double linked list len.
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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the pointer that points to head.
 * @idx:the index of the list
 * @n: value insert.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, 0));
	if (idx == len(*h))
		return (add_dnodeint_end(h, n));
	while (tmp)
	{
		if (c == (idx - 1))
		{
			new->next = tmp->next;
			tmp->next->prev = new;
			tmp->next = new;
			new->prev = tmp;
		}
		c++;
		tmp = tmp->next;
	}
	if (idx > c)
		return (NULL);
	return (new);
}
