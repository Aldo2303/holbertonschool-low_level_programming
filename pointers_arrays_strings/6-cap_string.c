#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @s: variable
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x])
	{
	while (!(s[x] >= 97 && s[x] <= 122))
		x++;
	if (s[x - 1] == ' ' || s[x - 1] == '\t' || s[x - 1] == '\n' ||
	s[x - 1] == ',' || s[x - 1] == ';' || s[x - 1] == '.' ||
	s[x - 1] == '!' || s[x - 1] == '?' || s[x - 1] == '"' ||
	s[x - 1] == '(' || s[x - 1] == ')' || s[x - 1] == '{' || s[x - 1] == '}' ||
	x == 0)
	s[x] -= 32;
	x++;
	}
	return (s);
}
