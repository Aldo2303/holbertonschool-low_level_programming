#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to number 98
 *
 * Return: Always 0.
 *
 *@n: variable
 */
void print_to_98(int n)
{
while (n > 98)
{
printf("%d, ", n);
n--;
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
}
while (n < 98)
{
printf("%d, ", n);
n++;
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
}
}
