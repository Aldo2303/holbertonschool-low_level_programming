#include "main.h"
/**
 * **_strncat - function that concatenates two strings
 *
 * @dest: variable
 *
 * @src: variable
 *
 * @n: variable
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < n; y++, x++)
	{
		dest[x] = src[y];
	}
	if (y >= n)
	{
		dest[x] = '\0';
	}
	return (dest);
}
