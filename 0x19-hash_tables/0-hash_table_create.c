#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: how long the array should be
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int x = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free (new_table);
		return (NULL);
	}
	for (; x < size; x++)
	{
		new_table->array[x] = NULL;
	}
	return (new_table);
}
