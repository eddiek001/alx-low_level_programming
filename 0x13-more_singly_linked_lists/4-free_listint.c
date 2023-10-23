#include "lists.h"
/**
 * free_listint - a function to free element
 * @head: input
 *
 * Return: free element
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

