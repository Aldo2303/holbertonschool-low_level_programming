#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: variable
 */
void puts_half(char *str)
{
	int x = 0, y, a;

	while (str[x] != '\0')
	{
		x++;
	}
	y = x / 2;
	for (a = y; a <= x; a++)
	{
	_putchar(str[a]);
	}
	_putchar ('\n');
}
