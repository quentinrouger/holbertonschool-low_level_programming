#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: the value associated if success NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *newNode;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	newNode = ht->array[index];
	while (newNode)
	{
		if (strcmp(newNode->key, key) == 0)
		{
			return (newNode->value);
		}
		newNode = newNode->next;
	}
	return (NULL);
}
