#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: the string to aplly the algorithm
 * @size: size of array
 * Return: Returns the index at which the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, result;

	if (size == 0)
		return (0);

	result = hash_djb2(key);
	index = result % size;
	return (index);
}

