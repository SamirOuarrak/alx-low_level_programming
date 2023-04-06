#include "main.h"
/**
 * factorial - calculate factorial of a number.
 * @n: to calculate
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n == 0 ? 1 : n * factorial(n - 1));
}
