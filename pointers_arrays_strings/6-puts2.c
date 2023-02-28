#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: variable
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x = x + 2;
	}
	_putchar('\n');
}
