#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 *
 * @s: variable
 *
 * @c: variable
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;
	char *p;

	while (s[x])
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		if (c == s[y])
		{
			p = &s[y];
		}
		else
		{
			return ('\0');
		}
	}
	return (p);
}
