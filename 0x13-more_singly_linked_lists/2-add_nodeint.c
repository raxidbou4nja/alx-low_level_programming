#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning of a linked list of integers.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Integer value to be added to the new node.
 *
 * Return: Pointer to the newly added node (the new head of the list).
 *		 NULL on failure (if memory allocation fails).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
