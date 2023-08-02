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
	size_t size = 0;
	long loop_detected;
	listint_t *head, *temp;

	if (!h)
	{
		return (0);
	}
	head = *h;
	*h = NULL;
	while (head)
	{
		size++;
		loop_detected = head->next - head;
		temp = head;
		free(temp);
		if (loop_detected >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (size);
}
