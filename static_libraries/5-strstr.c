#include "main.h"
/**
 * *_strstr - function that locates a substring
 *
 * @haystack: variable
 *
 * @needle: variable
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	x = 0;
	while (haystack[x] != '\0')
	{
		if (haystack[x] == needle[0])
		{
			z = x;
			y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[z] == needle[y])
				{
					z++;
					y++;
				}
					else
					{
					break;
					}
			}
				if (needle[y] == '\0')
				{
				return (haystack + x);
				}
			}
		x++;
	}
	return ('\0');
}
