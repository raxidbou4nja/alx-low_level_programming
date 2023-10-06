#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key (string)
 * @value: The value associated with the key
 * @next: A pointer to the next node in the collision resolution chain
 * @sprev: The value associated with the key
 * @snext: The value associated with the key
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
	struct hash_node_s *sprev;
	struct hash_node_s *snext;
} hash_node_t, shash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of pointers to hash_node_t structures
 * @shead: A pointer to the head of the sorted linked list
 * @stail: A pointer to the tail of the sorted linked list
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} hash_table_t, shash_table_t;



hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
