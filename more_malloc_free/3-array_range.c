#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *array_range - function that creates an array of integers
* @min: variable
* @max: variable
* Return: int
*/
int *array_range(int min, int max)
{
	int *ptr, rango_array, x;

	if (min > max)
		return (NULL);

	rango_array = ((max - min) + 1);
	ptr = malloc(sizeof(int) * rango_array);
	if (!ptr)
		return (NULL);

	for (x = 0; x <= rango_array; x++)
		ptr[x] = min++;
	return (ptr);
}
