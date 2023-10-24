#include "lists.h"
/**
 * get_nodeint_at_index - retrive a node at an index
 * @head: pointer to the first element
 * @index: node position
 * Return: pointer to the retrieved
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
