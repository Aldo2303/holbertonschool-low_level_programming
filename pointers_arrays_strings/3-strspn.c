#include "main.h"
/**
 * *_strspn - function that gets the length of a prefix substring
 *
 * @s: variable
 *
 * @accept: variable
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y = 0, count = 0;

	while (accept[y])
	{
		while (s[x] != ' ')
		{
		if (accept[y] == s[x])
		{
			count++;
		}
		x++;
		}
		y++;
		}
	return (count);
}
