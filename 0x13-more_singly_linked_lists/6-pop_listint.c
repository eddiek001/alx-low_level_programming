#include "lists.h"
/**
 * pop_listint - delete head node of a list
 * @head:the pointer to the list
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
