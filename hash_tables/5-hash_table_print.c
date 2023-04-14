#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *auxNode = NULL;
	int i, len;
	char *separator = "";

	if (ht == NULL)
		return;

	len = ht->size;

	printf("{");
	i = 0;
	while (i < len)
	{
		auxNode = ((ht->array)[i]);
		while (auxNode != NULL)
		{
			printf("%s'%s': '%s'", separator, auxNode->key, auxNode->value);
			separator = ", ";
			auxNode = auxNode->next;
		}
		i++;
	}
	printf("}\n");
}
