#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int x = 0, y, z;
	char *a, b;

	a = s;
	while (s[x] != '\0')
	{
		x++;
	}
	for (z = 1; z < x; z++)
	{
		a++;
	}
	for (y = 0; y < (x / 2); y++)
	{
		b = s[y];
		s[y] = *a;
		*a = b;
		a--;
	}
}

