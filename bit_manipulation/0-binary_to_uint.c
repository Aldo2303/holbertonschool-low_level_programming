#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: variable
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int suma = 0;
	int len, i;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;
	len = len - 1;

	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			suma += 1 * (1 << len);

		i++;
		len--;
	}
	return (suma);
}

