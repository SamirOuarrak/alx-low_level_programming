#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + j * i);
			}
			else
			{
				_putchar('0' + j * i / 10);
				_putchar('0' + j * i % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
