#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start nb
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		printf("%d, ", n);
		print_to_98(n > 98 ? n - 1 : n + 1);
	}
	else
	{
		printf("%d\n", n);
	}
}
