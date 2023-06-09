#include "variadic_functions.h"
/**
 * print_numbers - print_numbers the code
 * @separator : separator
 * @n: number of va_arg
 * @... : varg list
 *  Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i++ < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
