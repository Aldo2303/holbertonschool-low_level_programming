#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int k = 0;
char x;
while (k <= 9)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
k++;
_putchar('\n');
}
}
