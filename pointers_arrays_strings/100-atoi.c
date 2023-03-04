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
	unsigned int result = 0;
	unsigned int sign = 1;
	int x = 0;

	if (s[x] == 45)
	{
		sign = -1;
		x++;
	}
	else if (s[x] == 43)
	{
		x++;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
		result = (result * 10) + (s[x] - '0');
		x++;
	}
	return (sign * result);
}
