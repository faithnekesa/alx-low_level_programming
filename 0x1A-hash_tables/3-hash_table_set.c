#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: A pointer to the hash table to add or update the key/value to
 * @key: The key to add/update-Cannot be an empty string
 * @value:Value associated with the key
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valueCopy;
	unsigned long int counter, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (counter = index; ht->array[counter]; counter++)
	{
		if (strcmp(ht->array[counter]->key, key) == 0)
		{
			free(ht->array[counter]->value);
			ht->array[counter]->value = valueCopy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valueCopy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valueCopy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

