#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list list_idk);
void print_int(va_list list_idk);
void print_float(va_list list_idk);
void print_string(va_list list_idk);
/**
 * struct tipo - Struct tipos de datos
 * @tipo: tipo de dato que entrara en la va_list
 * @f: The function associated
 */
typedef struct type
{
	char type;
	void (*f)(va_list);
} tipo_dt;

#endif
