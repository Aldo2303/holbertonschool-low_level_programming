#include "main.h"
/**
 *print_sign - check >0 print +, if <0 print -, =0 print 0
 *Return: 1 if es +, 0 if is 0 and -1 if is negative
 *@n: int n
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
