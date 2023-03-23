#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: nb to print as _
 */
void print_diagonal(int n)
{
	int i;
	int j;

	j = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (j < n)
	{
		i = 0;
		while (i <= j)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		j++;
	}
}
