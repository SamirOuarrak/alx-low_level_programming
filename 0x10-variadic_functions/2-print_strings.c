#include "variadic_functions.h"
/**
 * print_strings - print_strings the code
 * @separator : separator
 * @n: number of va_arg
 * @... : varg list
 *  Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, n);
	while (i++ < n)
	{
		str =  va_arg(ap, char*);
		printf("%s", str ? str : "(nil)");
		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
