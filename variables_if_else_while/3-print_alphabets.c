#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x, i;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

