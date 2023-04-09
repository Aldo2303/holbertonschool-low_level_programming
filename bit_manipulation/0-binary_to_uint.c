#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: variable
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	/*el retorno es un unsigned int*/
	unsigned int suma = 0;
	int len, i;

	if (b == NULL)
		return (0);

	/*calculo el largo de b, que le hare el left shift, para obtener...
	 * ...la cantidad de ceros para tener la potencia de 2 que corresponde*/
	len = 0;
	while (b[len] != '\0')
		len++;
	/*cuando len = 0, no corro ningun lugar y me da el 2^0=1*/
	len = len - 1;

	/*vuelvo a recorrer, para hacer macht con los 1*/
	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		/*cada vez que encuentre 1, agrego la cantidad de 0 a mover con len*/
		if (b[i] == '1')
			suma += 1 * (1 << len);

		/*mientras i sube len baja para coincidir con su valor decimal con binario*/
		i++;
		len--;
	}
	return (suma);
}

