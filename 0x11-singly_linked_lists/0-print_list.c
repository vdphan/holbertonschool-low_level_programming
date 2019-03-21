#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to struct.
 *
 * Return:  the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
