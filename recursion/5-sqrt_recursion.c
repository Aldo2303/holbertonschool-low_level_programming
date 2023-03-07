#include "main.h"
/**
 * root - returns the the natural square root of a number
 *
 * @n: variable
 *
 * @y: variabel
 *
 * Return: int
 */
int root(int n, int y)
{

	if (y * y > n)
	{
		return (-1);
	}
	if (y * y == n)
	{
		return (y);
	}
	return (root(n, y + 1));
}


#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: variable
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
