#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: variable
 * @size: variable
 * @cmp: variable
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		cmp(array[x]);
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
