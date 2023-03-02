#include "main.h"
/**
 * *leet - function that encodes a string
 *
 * @s: variable
 *
 * Return: char
 */
char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int x, y;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; a[x] != '\0'; x++)
		{
			if (s[y] == a[x])
				s[y] = b[x];
		}
	}
	return (s);
}
