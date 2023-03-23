#include "variadic_functions.h"
/**
 * sum_them_all- function that returns the sum
 * @n: variable
 * @separator: variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list listptr;

	va_start(listptr, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(listptr, int));
			if (separator != NULL && i != n)
				printf("%s", separator);
	}
	printf("\n");
	va_end(listptr);
}

