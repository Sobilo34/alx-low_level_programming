#include "hash_tables.h"

/**
 * key_index - A function that calculates the index of a key in the hash table
 * @key: The key to hash
 * @size: The size of the hash table array
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	/* By calculating the index using modulo*/
	return (hash_value % size);
}

