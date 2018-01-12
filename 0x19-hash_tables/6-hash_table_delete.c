#include "hash_tables.h"
/**
 * hash_table_delete - frees memory for a given hash table
 * @ht: Hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *collision = NULL;
	hash_node_t *next = NULL;

	if (ht)
	{
		if (ht->array)
		{
			for(; idx < ht->size; idx++)
			{
				collision = ht->array[idx];
				while (collision)
				{
					next = collision->next;
					if (collision->key)
						free(collision->key);
					if (collision->value)
						free(collision->value);
						free(collision);
					collision = next;
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
