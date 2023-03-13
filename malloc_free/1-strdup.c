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
	int i = 0, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr = malloc(sizeof(char) * (*str));
		if (!ptr)
		{
		return (NULL);
		}
		i++;
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
