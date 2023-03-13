#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the variable
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, x;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr = malloc(sizeof(char) * i);
		if (!ptr)
		{
			return (NULL);
		}
	}
	for (x = 0; x <= i; x++)
	{
		ptr[x] = str[x];
	}
	if (x == i + 1)
	{
		ptr[x] = '\0';
	}
	return (ptr);
}



