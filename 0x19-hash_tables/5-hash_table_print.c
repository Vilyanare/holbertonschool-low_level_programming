#include "hash_tables.h"
/**
 * hash_table_print - print all key/value pairs in a hash table
 * @ht: Hash table to print from
 */
void hash_table_print(const hash_table_t *ht)
{
	int f = 0;
	unsigned long int idx = 0;
	hash_node_t *collision = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for(; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			collision = ht->array[idx];
			while(collision)
			{
				if (f == 1)
					printf(", ");
				f = 1;
				printf("'%s': '%s'", collision->key, collision->value);
				collision = collision->next;
			}
		}
	}
	printf("}\n");
}
