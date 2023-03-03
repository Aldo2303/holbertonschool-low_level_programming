#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: variable
 */
void print_chessboard(char (*a)[8])
{
	int fila, columna;

	fila = 0;
	while (fila < 8)
	{
		columna = 0;
		while (columna < 8)
		{
			_putchar (a[fila][columna]);
			columna++;
			}
			_putchar('\n');
			fila++;
			}
}

