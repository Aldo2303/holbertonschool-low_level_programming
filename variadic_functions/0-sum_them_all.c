#include "variadic_functions.h"
/**
 * sum_them_all- function that returns the sum
 * @n: variable
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma = 0;
	va_list listadd;

	if (n == 0)
		return (0);
	/* macro, which starts iterating arguments with the va_list*/
	va_start(listadd, n);
	/* iteration, until the parameters are obtained*/
	for (i = 0; i < n; i++)
		/* sums the data stored in the counter i*/
		suma += va_arg(listadd, int);
	/* I do a FREE, of the variable declared type va_list*/
	va_end(listadd);
	return (suma);
}
