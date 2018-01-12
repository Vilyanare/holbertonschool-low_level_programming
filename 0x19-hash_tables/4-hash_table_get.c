#include "hash_tables.h"
/**
 * hash_table_get - retrieves value for given key
 * @ht: Hash table to retrieve info from
 * @key: Key to find information for
 * Return: Value that matches the given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int idx = 0;

	if (key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	value = ht->array[idx]->value;
	return (value);
}
