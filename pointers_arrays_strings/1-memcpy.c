#include "main.h"
/**
 * *_memcpy - function that fills memory with a constant byte
 *
 * @dest: variable
 *
 * @src: variable
 *
 * @n: variable
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	unsigned int y;

	while (src[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
