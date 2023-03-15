#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function that returns a pointer to a 2 dimensional array
* @b: the variable
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
