#include "main.h"
/**
 * print_line - print _ * n
 * @n: nb to print as _
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
