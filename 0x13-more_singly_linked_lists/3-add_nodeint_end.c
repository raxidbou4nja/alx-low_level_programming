#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list of integers.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Integer value to be added to the new node.
 *
 * Return: Pointer to the newly added node (the new end of the list).
 *		 NULL on failure (if memory allocation fails or head is NULL).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
