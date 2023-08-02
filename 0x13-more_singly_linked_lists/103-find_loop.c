#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the beginning node of a loop in a linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: Pointer to the beginning node of the loop if a loop is found.
 *		 If there is no loop, returns NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
