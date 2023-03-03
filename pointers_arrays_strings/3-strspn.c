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
	int x, y, count = 0;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
		if (accept[y] == s[x])
		{
			count++;
		}
		y++;
		}
		x++;
		}
	return (count);
}
