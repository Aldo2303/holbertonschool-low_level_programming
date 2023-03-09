#include "main.h"
/**
 * main - program that prints its name
 * @argc: variable
 * @argv: variable
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
