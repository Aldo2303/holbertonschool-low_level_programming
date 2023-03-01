#include "main.h"
/**
 * *_strncpy - function that copies the string
 *
 * @dest: variable
 *
 * @src: variable
 *
 * @n: variable
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= n; y++)
	{
		dest[y] = src[y];
	}
	if (y == x + 1)
	{
		dest[y] = '\0';
	}
	return (dest);
}
