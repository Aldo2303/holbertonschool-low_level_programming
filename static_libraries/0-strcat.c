#include "main.h"
/**
 * *_strcat -  function that concatenates two strings
 *
 * @dest: variable
 *
 * @src: variable
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
