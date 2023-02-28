#include "main.h"
/**
 * print_rev - function that prints in reverse
 *
 * @s: variable
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 1)
	{
		x--;
		_putchar(s[x]);
	}
}
