#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @n: variables
 * @separator: variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list liststring;
	char *ptr;

	va_start(liststring, n);
	/*at each iteration, it is stored in a variable of type char* */
	for (i = 0; i < n; i++)
	{
		/*va_arg returns the next argument in the list of the specified data type*/
		ptr = va_arg(liststring, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		printf("%s", ptr);
		/*n-1 because the for is < n, as the va_arg looks forward*/
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(liststring);
}



