#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to struct.
 *
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	fast = slow = head;
	while (fast && slow && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
