#include "hash_tables.h"
/**
 * key_index - Takes in a key and returns an index for the hash table
 * @key: key to find index
 * @size: how long the hash table is
 * Return: The index to the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx = 0;

	key_idx = hash_djb2(key);
	key_idx %= size;

	return (key_idx);
}
