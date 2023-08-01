#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees the memory allocated for a linked list of integers.
 *
 * @head: Pointer to a pointer to the head of the linked list to be freed.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
