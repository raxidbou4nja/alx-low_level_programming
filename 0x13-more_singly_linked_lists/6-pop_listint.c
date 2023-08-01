#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Removes the first node of a linked list of integers.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The integer value stored in the removed node.
 *		 If the linked list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
	int value;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	value = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}
