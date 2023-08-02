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
	size_t Rindex, hIndex;

	listint_t  *working, *head, *current;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	hIndex = 0;
	current = *h;
	head = *h;

	while (head != NULL)
	{
		working = *h;
		for (Rindex = 0; Rindex < hIndex; Rindex++)
		{
			if (working == current)
			{
				*h = NULL;
				return (hIndex);
			}
			working = working->next;
		}
		current = head->next;
		free(head);
		head = current;
		hIndex++;
	}

	*h = NULL;

	return (hIndex);
}
