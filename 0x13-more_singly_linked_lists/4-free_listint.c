#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees the memory allocated for a linked list of integers.
 *
 * @head: Pointer to the head of the linked list to be freed.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

