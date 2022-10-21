#include "hash_tables.h"

/**
 * key_index - calculates index of a key
 * @key: the key to evaluate
 * @size: size of the table
 * Return: index of key in table
 */
unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
