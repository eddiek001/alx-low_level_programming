#include <stdlib.h>
#include <string.h>
#include "lists.h"
int len(const char *str);

/**
 * add_node_end - adds a new number to linker
 * @head: double pointer to the list_t
 * @str: string input
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - get lenght of the string
 * @str: the string
 * Return: length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
