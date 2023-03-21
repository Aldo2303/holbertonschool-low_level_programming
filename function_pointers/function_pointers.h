#ifndef FUN_POINTER
#define FUN_POINTER
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
