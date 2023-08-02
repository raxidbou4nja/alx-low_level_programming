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
	listint_t *rest, *rev;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	rev = NULL;

	while ((*head)->next != NULL)
	{
		rest = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = rest;
	}

	(*head)->next = rev;

	return (*head);
}
