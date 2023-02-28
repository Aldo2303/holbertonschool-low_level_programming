#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: variable
 */
void puts2(char *str)
{
	int x = 0, y = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	while (y < x)
	{
		_putchar(str[y]);
		y += 2;
	}
	_putchar('\n');
}
