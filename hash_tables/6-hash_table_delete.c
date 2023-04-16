#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table you want delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *auxNode = NULL, *nextNode = NULL;
	int i, len;

	if (ht == NULL)
		return;

	if (ht->size == 0)
	{
		free(ht);
		return;
	}

	len = ht->size;

	i = 0;
	while (i < len)
	{
		auxNode = ht->array[i];
		while (auxNode != NULL)
		{
			nextNode = auxNode->next;
			free(auxNode->key);
			free(auxNode->value);
			free(auxNode);
			auxNode = nextNode;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
