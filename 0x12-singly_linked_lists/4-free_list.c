#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - Frees the memory allocated for a linked list.
 *
 * @head: Pointer to the head of the linked list to be freed.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
