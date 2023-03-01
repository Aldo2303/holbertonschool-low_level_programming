#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: variable
 *
 * @n: variable
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == n)
	{
		printf("%d\n", a[x]);
	}
}
