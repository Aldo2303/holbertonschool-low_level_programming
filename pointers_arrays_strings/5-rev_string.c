#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 1)
	{
		int t = 0;

		x--;
		s[t] = s[x];
	}
}
