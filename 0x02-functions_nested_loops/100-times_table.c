#include "main.h"
/**
 * _putnb - putnb
 * @n: number to put
 */
void _putnb(int n)
{
	if (n <= 9)
	{
		_putchar ('0' + n);
	}
	else
	{
		_putnb(n / 10);
		_putchar('0' + n % 10);
	}
}
/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: count
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j <= 9 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (i * j <= 99 && j != 0)
			{
				_putchar(' ');
			}
			_putnb(i * j);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
