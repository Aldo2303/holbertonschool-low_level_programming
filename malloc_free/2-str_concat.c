#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: variable
 * @s2: valriable
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, z = 0, suma = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	suma = x + y;
	ptr = malloc((sizeof(char) * suma) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	y = 0;
	while (z < suma)
	{
		if (z <= x)
			ptr[z] = s1[z];
		if (z >= x)
		{
			ptr[z] = s2[y];
			y++;
		}
		z++;
	}
	ptr[z] = '\0';
	return (ptr);
}
