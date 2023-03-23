#include "main.h"
/**
 * more_numbers - print 0 to 14 - 10 times
 */
void more_numbers(void)
{
	int c;
	int i;
	int count;

	i = 0;
	while (i <= 9)
	{
		c = '0';
		count = 1;
		while (count == 1 || (c <= '4' && count != 1))
		{
			if (count == 2)
			{
				_putchar('1');
			}
			_putchar(c);
			c++;
			if (c == '9' + 1 && count == 1)
			{
				count++;
				c = '0';
			}
		}
		i++;
		_putchar('\n');
	}
}
