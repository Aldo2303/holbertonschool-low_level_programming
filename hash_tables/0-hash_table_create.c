#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table.
 *@size: size of array
 *Return: pointer to hash table or NULL if wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*pointer to struct that create a new hash table*/
	hash_table_t *newTable;
	unsigned long int i;

	/*if no size no array*/
	if (size == 0)
		return (NULL);

	/*memory for store everything that the struct hash table*/
	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	newTable->size = size;
	/*memory for store "size" number of node*/
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable->array == NULL)
	{
		/*if malloc for newTa->array fail, free the previous malloc*/
		free(newTable);
		return (NULL);
	}

	i = 0;
	/*inicializate every index of array to NULL*/
	while (i < size)
	{
		newTable->array[i] = NULL;
		i++;
	}

	return (newTable);
}
