#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Calculates the number of nodes in a linked list of integers.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
