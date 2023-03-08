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

	while (*s != '\0')
	{
	if (*s == '-')
	{
		sign = -sign;
	}
	if (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		while (*(s + 1) >= '0' && *(s + 1) <= '9')
		{
			s++;
			result = result * 10 + (*s - '0');
		}
		break;
	}
	s++;
	}
	return (sign * result);
}
