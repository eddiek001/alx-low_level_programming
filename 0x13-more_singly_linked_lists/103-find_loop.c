#include "lists.h"
/**
 * find_listint_loop - find a loop in a list
 * @head: head of the linked list
 *
 * Return: The address of the node at the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr2;
	listint_t *prevptr;

	ptr2 = head;
	prevptr = head;
	while (head && ptr2 && ptr2->next)
	{
		head = head->next;
		ptr2 = ptr2->next->next;

		if (head == ptr2)
		{
			head = prevptr;
			prevptr = ptr2;
			while (1)
			{
				ptr2 = prevptr;
				while (ptr2->next != head && ptr2->next != prevptr)
				{
					ptr2 = ptr2->next;
				}
				if (ptr2->next == head)
					break;

				head = head->next;
			}
			return (ptr2->next);
		}
	}

	return (NULL);
}
