#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: variable
 * @index: variable
 * Return: int, or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;
	/*unsigned int para tener mas espacio y poder compararlo con index*/
	unsigned int range;

	/*valor maximo que puede guardar unsigned long int en bits(*8=1byte)*/
	range = (sizeof(unsigned long int) * 8);

	if (index > range)
		return (-1);

	/*desplaza n a index lugares y lo compara con &1*/
	value = ((n >> index) & 1);
	return (value);
}

