#include "main.h"
/**
 * print_triangle - prints to triangle
 *
 * @size: variable
 */
void print_triangle(int size)
{
	int espacio, base, altura;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (base = 1; base <= size; base++)
		{
			for (espacio = size - base; espacio >= 1; espacio--)
			{
				_putchar(' ');
			}
			for (altura = 1; altura <= base; altura++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
