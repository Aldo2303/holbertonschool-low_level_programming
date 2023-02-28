#include "main.h"
/**
 * _puts - a function that prints a string
 *
 * @str: variable
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
		str++;
	_puts(str);
}

