#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Calculates the sum of all integers in a linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all integers in the linked list.
 *		 If the list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
