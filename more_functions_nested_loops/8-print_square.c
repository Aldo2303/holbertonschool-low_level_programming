#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *
 * @size: variable
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (b = 0; b < size; b++)
{
for (a = 1; a <= size; a++)
{
if (a > 0)
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
