#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index in a linked list of integers.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 * If the index is invalid, returns -1 (failed).
 * If the linked list is empty, returns -1 (failed).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp, *current, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	previous = NULL;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);

		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
