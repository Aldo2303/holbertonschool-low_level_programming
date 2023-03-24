#include "variadic_functions.h"
/**
 * print_all - function that print all types
 * @format: variable
 */

void print_all(const char * const format, ...)
{
	char *separador = "";
	int x, y;
	va_list list_idk;

	tipo_dt tipos[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list_idk, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		y = 0;
		while (tipos[y].type != '\0')
		{
			if (tipos[y].type == format[x])
			{
				printf("%s", separador);
				tipos[y].f(list_idk);
				separador = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(list_idk);
}

/**
 * print_char - funcion para imprimir el char encontrado en la va_list
 * @list_idk: variable
 */
void print_char(va_list list_idk)
{
	printf("%c", va_arg(list_idk, int));
}

/**
 * print_int - funcion para imprimir el int encontrado en la va_list
 * @list_idk: variable
 */
void print_int(va_list list_idk)
{
	printf("%d", va_arg(list_idk, int));
}

/**
* print_float - funcion para imprimir el float encontrado en la va_list
* @list_idk: variable
*/
void print_float(va_list list_idk)
{
	printf("%f", va_arg(list_idk, double));
}

/**
* print_string- funcion para imprimir el string encontrado en la va_list
* @list_idk: variable
*/
void print_string(va_list list_idk)
{
	char *str;

	str = va_arg(list_idk, char *);
	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}
