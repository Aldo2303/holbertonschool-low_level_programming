#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table.
 *@size: size of array
 *Return: pointer to hash table or NULL if wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		newTable->array[i] = NULL;
		i++;
	}

	return (newTable);
}
