#include <stdlib.h>
#include <string.h>
#include "lists.h"

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
	unsigned int i, count = o;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
		return (*head);
}
