#include "main.h"
/**
 * *string_toupper -  function that changes letters to uppercase
 *
 * @s: variable
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] -= 32;
		}
	}
	return (0);
}

