#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: variable
 * @index: variable
 * Return: int, or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int range;

	/*valor maximo que puede guardar unsigned long int en bits(*8=1byte)*/
	range = (sizeof(unsigned long int) * 8);

	if (index > range)
		return (-1);

	/*muevo el 0b1 (index lugares) para match con el index que quiero*/
	comp <<= index;
	/*aplico ~ para que todas las entradas sean 1, menos la del index...*/
	/*...que quiero cambiar (esa estará en 0)*/
	comp = ~comp;
	*n = (*n & comp);
	return (1);
}
