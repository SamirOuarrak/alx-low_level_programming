#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			c = a;
			for (; c <= '9'; c++)
			{
				for (d = b + 1; d <= '9'; d++)
				{
					if (a != c || b != d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a != '9' || b != '8' || c != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				d = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
