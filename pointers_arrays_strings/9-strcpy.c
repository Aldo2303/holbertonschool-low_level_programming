#include "main.h"
/**
 * *_strcpy - function that copies the string pointed
 *
 * @dest: variable
 *
 * @src: variable
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0, y;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	if (y == x + 1)
	{
		dest[y] = '\0';
	}
	return (dest);
}
