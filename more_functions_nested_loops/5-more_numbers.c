#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b <= 9; b++)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
{
_putchar(a / 10);
}
_putchar(a % 10);
}
_putchar('\n');
}
}
