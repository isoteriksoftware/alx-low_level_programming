#include "hash_tables.h"

/**
 * hash_table_get - retrieve value using key in a hash table
 * @ht: the hash table
 * @key: key to retrieve
 * Return: value of key in ht or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	if (tmp)
	{
		while (strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		if (tmp)
			return (tmp->value);
	}
	return (NULL);
}
