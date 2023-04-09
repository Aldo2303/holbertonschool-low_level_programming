#include "main.h"
/**
 * print_binary -function that binary number representation of a number decimal
 * @n: variable
 */
void print_binary(unsigned long int n)
{
	/*cuando n=1, deja de llamar recursivo y empieza a putchar lo que...*/
	/*...fue dejando pendiente en cada llamada*/
	if (n > 1)
		/*se va llamando a si misma con el número corrido un lugar...*/
		/*hasta llegar a 1*/
		print_binary(n >> 1);

	/*compara el numero "&1" y se va quedar con el 1er valor y ese lo put*/
	_putchar((n & 1) + '0');
}

