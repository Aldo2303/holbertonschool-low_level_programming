#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: the string to aplly the algorithm
 * Return:  value associated with the element, or NULL if key is NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *auxNode = NULL;
	unsigned long int index = 0;
	int len = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	len = ht->size;
	index = key_index((const unsigned char *)key, len);
	auxNode = ht->array[index];

	while (auxNode != NULL)
	{
		if (strcmp(key, auxNode->key) == 0)
			return (auxNode->value);
		auxNode = auxNode->next;
	}
	return (NULL);
}




