#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: variable
 */
void puts_half(char *str)
{
	int x = 0, y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		y = (x / 2);
	}
	else
	{
		y = ((x - 1) / 2);
		y += 1;
	}
	for (; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar ('\n');
}
