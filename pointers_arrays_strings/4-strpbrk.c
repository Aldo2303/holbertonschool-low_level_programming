#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: variable
 *
 * @accept: variable
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int d = 0;

	while (*s != '\0' && *accept != '\0')
	{
	if (*s == *accept)
	{
		d++;
		return (s);
	}
	s++;
	accept++;
	}
		return ('\0');
}
