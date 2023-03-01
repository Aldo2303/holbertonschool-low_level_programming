#include "main.h"
/**
 * reverse_array - function that reverses the content an array
 *
 * @a: variable
 *
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int x = 0, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
