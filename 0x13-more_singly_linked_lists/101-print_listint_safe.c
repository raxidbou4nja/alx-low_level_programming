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
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if ((void *)current <= (void *)current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		current = current->next;
	}

	return (count);
}
