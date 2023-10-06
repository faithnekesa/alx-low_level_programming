#include "hash_tables.h"

/**
 * hash_table_create -Function that creates a hash table
 * @size:The array size
 * Return:A pointer to the newly created hash table
		  Otherwise -NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htPtr;
	unsigned long int index;

	htPtr = malloc(sizeof(hash_table_t));
	if (htPtr == NULL)
		return (NULL);

	htPtr->size = size;
	htPtr->array = malloc(sizeof(hash_node_t *) * size);
	if (htPtr->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		htPtr->array[index] = NULL;

	return (htPtr);
}
