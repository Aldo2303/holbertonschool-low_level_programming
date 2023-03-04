#include "main.h"
/**
 *  print_diagsums - function that prints the sum of the two diagonals
 *
 * @a: variable
 *
 * @size: variable
 */
void print_diagsums(int *a, int size)
{
	int x;
	int ppal = 0, sec = 0;

	for (x = 0; x < size; x++)
	{
		ppal += *(a + x * size + x);
		sec += *(a + x * size + (size - 1 - x));
	}
	printf("%d, ", ppal);
	printf("%d\n", sec);
}

