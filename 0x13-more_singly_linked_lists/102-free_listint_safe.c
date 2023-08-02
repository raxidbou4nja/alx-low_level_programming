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

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		if ((void *)temp <= (void *)current)
		{
			*h = NULL;
			return (size);
		}

		temp->next = temp;
		free(temp);
	}

	*h = NULL;
	return (size);
}
