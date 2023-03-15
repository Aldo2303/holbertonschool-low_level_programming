#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function that returns a pointer to a 2 dimensional array
* @b: the variable
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
