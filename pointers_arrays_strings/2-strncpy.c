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
	int x = 0, y = 0;

	while (src[x])
	{
		x++;
	}
	while (y < n && src[y])
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
