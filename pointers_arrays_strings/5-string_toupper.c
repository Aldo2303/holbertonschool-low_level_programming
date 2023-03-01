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
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = (int)s[x] - 32;
		}
		x++;
	}
	return (0);
}
