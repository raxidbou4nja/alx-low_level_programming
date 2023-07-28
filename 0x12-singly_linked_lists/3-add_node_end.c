#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: Pointer to the string to be added to the new node.
 *
 * Return: Pointer to the newly added node (the new end of the list).
 *		 NULL on failure (if memory allocation fails or str is NULL).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int len;

	if (str == NULL || new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
