#include "hash_tables.h"

/**
 * hash_djb2 - This is a hash function implementing the djb2 algorithm.
 * @str: The input string to be hashed
 * Return: The hash value generated using the djb2 algorithm
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int hash = 5381;

	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i; /* hash * 33 + i */
	}

	return (hash);
}
