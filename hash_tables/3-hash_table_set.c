#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add
 * @key: the string to aplly the algorithm
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *auxNode = NULL, *newNode = NULL;
	unsigned long int index = 0;
	int len = 0;

	if (ht == NULL || key == NULL)
		return (0);

	len = ht->size;
	index = key_index((const unsigned char *)key, len);

	auxNode = ht->array[index];

	while (auxNode != NULL)
	{
		if (strcmp(key, auxNode->key) == 0)
		{
			free(auxNode->value);
			auxNode->value = strdup(value);
			return (1);
		}
		auxNode = auxNode->next;
	}

	newNode = malloc(sizeof(hash_table_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}



