#include "main.h"
/**
 * *_strstr - function that locates a substring
 *
 * @haystack: variable
 *
 * @needle: variable
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	while ((*haystack != '\0' && *needle != '\0') && *needle == *haystack)
	{
		if (*needle == *haystack)
		{
			p = haystack;
			return (p);
		}
		needle++;
		haystack++;
	}
	return ('\0');
}

