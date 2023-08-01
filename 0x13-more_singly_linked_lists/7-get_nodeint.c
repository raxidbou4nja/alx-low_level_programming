#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Retrieves the node at a given
 * index in a linked list of integers.
 *
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the node at the given index.
 *		 If the node at the specified index does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}

