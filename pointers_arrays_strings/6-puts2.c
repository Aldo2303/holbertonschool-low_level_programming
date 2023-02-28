#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: variable
 */
void puts2(char *str)
{
	int x = 0, y = (x % 2);

	while (str[x] != '\0')
	{
		x++;
	}
	if (y == 0)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
