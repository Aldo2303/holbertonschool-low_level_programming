#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @n: variable
 * @separator: variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list liststring;
	char *ptr;

	va_start(liststring, n);
	for (i = 1; i <= n; i++)
	{
		ptr = va_arg(liststring, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		printf("%s", ptr);

		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(liststring);
}



