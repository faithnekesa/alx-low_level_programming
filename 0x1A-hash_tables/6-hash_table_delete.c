#include "hash_tables.h"

/**
 * hash_table_delete -Function that deletes a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmpNode;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				tmpNode = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmpNode;
			}
		}
	}
	free(head->array);
	free(head);
}

