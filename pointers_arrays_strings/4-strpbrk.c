#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: variable
 *
 * @accept: variable
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	while (s[x])
	{
		y = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
