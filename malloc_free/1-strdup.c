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
	unsigned int i = 0, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);
	if (!ptr)
	{
	return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		ptr[x] = str[x];
	}
	ptr[x] = '\0';
	return (ptr);
}
