#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct listNode - Represents a node in a linked list.
 *
 * @str: Pointer to a string.
 * @len: Length of the string.
 * @next: Pointer to the next node in the linked list.
 */

typedef struct listNode
{
	char *str;
	unsigned int len;
	struct listNode *next;
} list_t;

size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);

#endif
