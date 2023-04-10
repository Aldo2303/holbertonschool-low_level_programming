#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: variable
 * @m: variable
 * Return: unsigned int number de bits changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned int count = 0;

	dif = n ^ m;

	while (dif)
	{
		count = count + (dif & 1);
		dif >>= 1;
	}
	return (count);
}
