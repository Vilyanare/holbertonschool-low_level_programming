#include "hash_tables.h"
/**
 * hash_table_set - Sets a key to a value in the hash table
 * @ht: Struct that holds the variables of the hash table
 * @key: string to be added to hash table as key
 * @value: string to be added to hash table as value of coresponding key
 * Return: 1 for success 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *check = NULL;
	int f = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (key[0] == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	check = ht->array[idx];

	while (check)
	{
		if (strcmp(check->key, key) == 0)
		{
			f = 1;
			break;
		}
		check = check->next;
	}
	if (f == 0)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}
	else
	{
		free(check->value);
		check->value = strdup(value);
		free(new_node);
	}
	return (1);
}
