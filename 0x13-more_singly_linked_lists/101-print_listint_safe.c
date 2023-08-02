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
	size_t cIndex, rIndex;
	const listint_t *working, *current;

	current = head;
	cIndex = 0;

	while (current != NULL)
	{
		working = head;
		for (rIndex = 0; rIndex < cIndex; rIndex++)
		{
			if (working == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (cIndex);
			}

			working = working->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		cIndex++;
	}

	return (cIndex);
}
