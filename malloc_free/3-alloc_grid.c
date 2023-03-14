#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: the variable
 * @height: the variable
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **ptr_matriz;
	int x, z;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr_matriz = (int **)malloc(sizeof(int) * height);
	if (ptr_matriz == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr_matriz[x] = (int *)malloc(sizeof(int) * width);
		if (ptr_matriz[x] == NULL)
		{
			for (x = 0; x < height; x++)
			{
				free(ptr_matriz[x]);
			}
			free(ptr_matriz);
			return (NULL);
		}
		for (z = 0; z < width; z++)
		{
			ptr_matriz[x][z] = 0;
		}
	}
	return (ptr_matriz);
}
