#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: variable
 */
void print_line(int n)
{
int a;
for (a = 0; a < n; a++)
{
putchar('_');
}
putchar('\n');
}