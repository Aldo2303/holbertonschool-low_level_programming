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
for (a = 1; a <= size; a++)
_putchar(' ');
{
if (a > 0)
{
for (b = 1; b <= a - 1; b++)
_putchar('#');
}
_putchar('\n');
}
}
}
