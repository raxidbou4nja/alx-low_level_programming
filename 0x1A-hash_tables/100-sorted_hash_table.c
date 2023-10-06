#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table with a specified size.
 * @size: The size of the hash table to be created.
 *
 * Return: A pointer to the newly created
 * hash table or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(shash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * make_node - Mallocs and inserts the new node values.
 * @key: The unique value to be added.
 * @value: The associated value with the key to be added.
 *
 * Return: A pointer to the newly created node or NULL if an error occurs.
 */
shash_node_t *make_node(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;

	return (new);
}

/**
 * assign_head - Updates or assigns a new head node when needed.
 * @new: The newly created node to be checked.
 * @ht: The sorted hash table.
 *
 * Return: 1 if the head node was updated or created, 0 otherwise.
 */
int assign_head(shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}

	if (strcmp(new->key, ht->shead->key) < 0)
	{
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
		return (1);
	}

	return (0);
}

/**
 * assign - Updates or assigns a new node other than the head when needed.
 * @new: The newly created node to be checked.
 * @ht: The sorted hash table.
 */
void assign(shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *temp;
	int status;

	status = assign_head(new, ht);

	if (status == 1)
		return;

	temp = ht->shead->snext;

	while (temp)
	{
		if (strcmp(new->key, temp->key) < 0)
		{
			new->sprev = temp->sprev;
			new->snext = temp;
			temp->sprev->snext = new;
			temp->sprev = new;
			return;
		}

		if (strcmp(new->key, temp->key) > 0 && temp->snext == NULL)
		{
			new->sprev = temp;
			new->snext = temp->snext;
			temp->snext = new;
			ht->stail = new;
			return;
		}
		temp = temp->snext;
	}
}
