#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given index in a linked list of integers.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: The index where the new node should be added (starting from 0).
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of the new node if successful, or NULL if it failed.
 *		 If it's not possible to add the new node at index idx, returns NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *current;
        unsigned int i;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
