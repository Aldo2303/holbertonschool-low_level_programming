#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: variable
 * @argv: variable
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y, suma = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!(argv[x][y] >= '0' && argv[x][y] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[x]);
	}
	printf("%d\n", suma);
	return (0);
}
