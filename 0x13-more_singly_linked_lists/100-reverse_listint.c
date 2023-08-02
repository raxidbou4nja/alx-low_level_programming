#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - Reverses a linked list of integers in place.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: Pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rest, *reversed;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	rest = (*head)->next;

	(*head)->next = NULL;
	reversed = reverse_listint(&rest);
	rest->next = *head;

	return (reversed);
}
