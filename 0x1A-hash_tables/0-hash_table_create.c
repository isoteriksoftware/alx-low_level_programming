#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res = malloc(sizeof(*res));
	hash_node_t **arr;
	unsigned long int i = 0;

	if (!res)
		return (0);
	arr = malloc(size * sizeof(*arr));
	if (!arr)
	{
		free(res);
		return (0);
	}
	while (i < size)
	{
		arr[i] = NULL;
		i++;
	}
	res->size = size;
	res->array = arr;
	return (res);
}
