#include "variadic_functions.h"
/**
 * sum_them_all - sum of all argument
 * @n : number 1
 * @... : nb...
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list ap;
	int sum = 0;

	va_start(ap, n);
	while (i++ <= n)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
