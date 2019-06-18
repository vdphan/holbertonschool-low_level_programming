#include "sort.h"

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Cocktail shaker sort algorithm
 * @list: pointer of the pointer that points to doubly linked lists.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *start = NULL, *end = NULL;
	_Bool sorted = true;

	if (!*list || !list)
		return;
	start = *list;
	while (sorted)
	{
		sorted = false;
		while (start && start->next)
		{
			if (start->n > start->next->n)
			{
				swap_ll(start, start->next, list);
				sorted = true;
				if (start->next)
					continue;
			}
			if (start->next == NULL)
				break;
			start = start->next;
		}
		end = start;
		while (end && end->prev)
		{
			if (end->prev->n > end->n)
			{
				swap_ll(end->prev, end, list);
				sorted = true;
				if (end->prev)
					continue;
			}
			if (end->prev == NULL)
				break;
			end = end->prev;
		}
		start = end;
	}
}

/**
 *swap_ll - swaps value between 2 nodes in doubly linked lists.
 *@left: pointer of doubly linked lists.
 *@right: pointer of doubly linked lists.
 *@list: pointer of doubly linked lists.
 */
void swap_ll(listint_t *left, listint_t *right, listint_t **list)
{
	listint_t *p, *n;

	p = left->prev;
	n = right->next;
	if (p)
		p->next = right;
	else
		*list = right;
	if (n)
		n->prev = left;
	right->prev = p;
	left->next = n;

	right->next = left;
	left->prev = right;
	print_list(*list);
}
