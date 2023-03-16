#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  string_nconcat- function that concatenates two strings
 * @s1: the variable
 * @s2: the variable
 * @n: variable of byte
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int suma_str = 0, number = n, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (number >= _strlen(s2))
		number = _strlen(s2);

	suma_str = (_strlen(s1) + number + 1);
	ptr = malloc(sizeof(char) * suma_str);
	if (!ptr)
		return (NULL);

	for (x = 0; x < _strlen(s1); x++)
		ptr[x] = s1[x];
	for (y = 0; y < number; y++)
		ptr[x + y] = s2[y];
	ptr[x + y] = '\0';
		return (ptr);
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: variable
 *
 * Return: x
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
x++;
return (x);
}
