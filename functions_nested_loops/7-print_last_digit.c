#include "main.h"
/**
 * print_last_digit -  print the last digit
 *
 * Return: Always ld
 *
 * @num: variable
 *
 */
int print_last_digit(int num)
{
int ld;
ld = (num % 10);
if (ld < 0)
{
ld = ld * -1;
_putchar('0' + ld);
return (ld);
}
else
{
_putchar('0' + ld);
return (ld);
}
}
