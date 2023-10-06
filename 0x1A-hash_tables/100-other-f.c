#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The unique value to be added.
 * @value: The associated value with the key to be added.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *head, *new, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	new = make_node(key, value);

	if (new == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		assign(new, ht);
		ht->array[index] = new;
		return (1);
	}

	head = ht->array[index];
	temp = head;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = new->value;
			free(new->key);
			free(new);
			return (1);
		}
		temp = temp->next;
	}
	assign(new, ht);
	new->next = head;
	ht->array[index] = new;
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated
 * with a key from the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The unique value to be searched for.
 *
 * Return: The value associated with the element
 * found, NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	putchar('{');
	temp = ht->shead;
	while (temp)
	{
		if (temp->snext == NULL)
		{
			printf("'%s': ", temp->key);
			printf("'%s'", temp->value);
			break;
		}
		printf("'%s': '%s', ", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	putchar('{');
	temp = ht->stail;
	while (temp)
	{
		if (temp->sprev == NULL)
		{
			printf("'%s': ", temp->key);
			printf("'%s'", temp->value);
			break;
		}
		printf("'%s': '%s', ", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *temp, *temp2;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];

			while (temp != NULL)
			{
				temp2 = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp2;
			}
		}
	}

	free(ht->array);
	free(ht);
}
