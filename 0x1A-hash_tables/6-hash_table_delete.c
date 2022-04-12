#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			while (ht->array[x])
			{
				temp = ht->array[x];

				free(temp->key);
				free(temp->value);
				free(temp);
				ht->array[x] = ht->array[x]->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
