#include "main.h"
/**
 * _isalpha - check if is lowercase and uppercase character
 *Return: 1 if lowercase or uppercase, else 0
 *@c: (int c)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
}
