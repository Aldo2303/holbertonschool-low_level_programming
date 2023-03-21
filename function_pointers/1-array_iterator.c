#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - given as a parameter on each element of an array
 * @array: variable
 * @size: variable
 * @action: variable
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == NULL || array == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}




