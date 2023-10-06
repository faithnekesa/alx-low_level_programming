#include "hash_tables.h"

/**
 * hash_table_print -Function that prints a hash table
 * @ht: Pointer to the hash table being printed
 * Description:print the key/value in the order that they appear
 * in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char commaFlag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (commaFlag == 1)
				printf(", ");

			node = ht->array[index];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			commaFlag = 1;
		}
	}
	printf("}\n");
}
