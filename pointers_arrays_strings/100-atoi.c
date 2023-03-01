#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 *
 * @s: variable
 *
 * Return: x
 */
int _atoi(char *s)
{
	int x = 0;

	while (*s >= '0' && *s <= '9')
	{
		x = (x * 10) + (*s - '0');
		x++;
	}
	return (x);
}

