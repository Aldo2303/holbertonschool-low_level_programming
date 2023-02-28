#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int x = 0;
	int z = 0;
	char t[1000];

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 1)
	{
		x--;
	}
	for (; z == x; z++)
	{
		s[x] = t[z];
	}
}

