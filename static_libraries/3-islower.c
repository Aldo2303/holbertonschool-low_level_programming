#include "main.h"
/**
 * _islower - check if is lowercase character
 *Return: 1 if lowercase, else 0
 *@c: (int c)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
