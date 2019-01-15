/*
 * File: 3-hash_table_set.c
 * Auth: Brennan D Baraban
*/

#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
