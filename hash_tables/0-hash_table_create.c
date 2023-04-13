#include "hash_tables.h"

/**
 * *hash_table_create - Write a function that creates a hash table.
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	if (!size)
	{
		return (NULL);
	}
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
		return (NULL);
	}
	newtable->size = size;
	newtable->array = malloc(sizeof(hash_node_t *));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	return (newtable);
}
