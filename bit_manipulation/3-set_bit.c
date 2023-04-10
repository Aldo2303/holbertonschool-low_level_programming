#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: variable
 * @index: variable
 * Return: int, or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int range;

	/*valor maximo que puede guardar unsigned long int en bits(*8=1byte)*/
	range = (sizeof(unsigned long int) * 8);

	if (index > range)
		return (-1);

	/*muevo el 0b1 (index lugares) para match con el index que quiero*/
	comp <<= index;
	*n = (*n | comp);
	return (1);
}
