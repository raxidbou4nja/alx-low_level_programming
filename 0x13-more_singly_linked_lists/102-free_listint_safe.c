#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers, even with a loop.
 *
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 *
 * Description:
 * This function frees the memory occupied by
 * a linked list of integers, even if the list has a loop.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;
	int loop_detected = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;

		if (current->n == -999999)
		{
			loop_detected = 1;
			break;
		}

		current->n = -999999;

		temp = current;
		current = current->next;

		free(temp);
	}

	*h = NULL;

	if (loop_detected)
		return (size);

	return (size);
}
