#include "hash_tables.h"

void print_node(hash_node_t *n);

/**
 * hash_table_print - prints a hash table
 * @ht: the table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int comma = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (comma)
			{
				printf(", ");
				comma = 0;
			}
			print_node(ht->array[i]);
			comma = 1;
		}
		i++;
	}
	printf("}\n");
}

/**
 * print_node - prints a node and all its linked nodes
 * @n: node pointer
 */
void print_node(hash_node_t *n)
{
	if (!n)
		return;
	printf("'%s': '%s'", n->key, n->value);
	if (n->next)
	{
		printf(", ");
		print_node(n->next);
	}
}
