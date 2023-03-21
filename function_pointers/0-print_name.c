#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that print name
 * @name: variable
 * @f: variable
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
