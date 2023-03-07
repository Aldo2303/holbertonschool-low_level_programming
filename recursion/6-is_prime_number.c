#include "main.h"
/**
 * prime - return prime number
 *
 * @n: variable
 *
 * @a: variable
 *
 * Return: int
 */
int prime(int n, int a)
{

	if (n <= 1)
	{
		return (0);
	}
	else if (n % a == 0 && a > 1)
	{
		return (0);
	}
	else if ((n / a) < a)
	{
		return (1);
	}
	return (prime(n, a + 1));
}

#include "main.h"
/**
 * is_prime_number - returns the prime number
 *
 * @n: variable
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
