#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of interger
 *  using the Insertion sort
 * @list: pointer to the pointer that points to list.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *p, *p2, *n, *n2, *tmp;

	while (curr)
	{
		if (!curr->next)
			return;
		if (curr->next->n < curr->n)
		{
			p = curr->prev;
			n = curr->next;
			n2 = curr->next->next;
			p->next = n;
			n->prev = p;
			curr->next = n2;
			if (n2)
				n2->prev = curr;
			n->next = curr;
			curr->prev = n;
			curr = curr->prev;
			print_list(*list);
			while (curr)
			{
				tmp = curr;
				if (!tmp->prev)
					break;
				if (tmp->n < tmp->prev->n)
				{
					p = tmp->prev;
					n = tmp->next;
					p2 = curr->prev->prev;
					p->next = n;
					n->prev = p;
					tmp->prev = p2;
					if (p2)
						p2->next = tmp;
					else
						*list = tmp;
					tmp->prev = p2;
					tmp->next = p;
					p->prev = tmp;
					tmp = p;
					print_list(*list);
				}
				else
					break;
			}
		}
		curr = curr->next;

	}
}
