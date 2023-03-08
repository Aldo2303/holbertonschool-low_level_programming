#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: variable
 *
 * @b: variable
 *
 * @n: variable
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;
	unsigned int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
	return (s);
}
