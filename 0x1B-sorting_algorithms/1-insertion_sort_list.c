#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of interger
 * using the Insertion sort
 * @list: pointer to the pointer that points to list.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *last, *curr = *list;

	if (!list || !*list)
		return;
	while (curr && curr->next)
	{
		if (curr->n > curr->next->n)
		{
			swap_ll(curr, curr->next, list);
			last = curr;
			curr = curr->prev;
			while (curr && curr->prev)
			{
				tmp = curr;
				if (tmp->n < tmp->prev->n)
					swap_ll(tmp->prev, tmp, list);
				else
					break;
			}
			curr = last;
		} else
			curr = curr->next;
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
