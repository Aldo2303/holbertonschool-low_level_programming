#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char NUMx, alpha;
for (NUMx = '0'; NUMx <= '9'; NUMx++)
{
putchar(NUMx);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
