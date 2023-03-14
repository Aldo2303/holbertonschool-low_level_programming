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
	int x, y;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr_matriz = (int**)malloc(sizeof(int) * height);
	if (!ptr_matriz)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr_matriz[x] = (int*)malloc(sizeof(int) * width);
		if (!ptr_matriz)
			return (NULL);
		for (y = 0; y < width; y++)
			ptr_matriz[x][y] = 0;
	}
	return (ptr_matriz);
}
