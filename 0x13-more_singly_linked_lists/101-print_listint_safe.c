#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers, even with a loop.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 *
 * Description:
 * This function prints the elements of a linked
 * list of integers, even if the list has a loop.
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	printf("[%p] %d\n", (void *)head, head->n);

	if (head->next < head)
	{
		return (1 + print_listint_safe(head->next));
	}
	else
	{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		return (1);
	}
}
