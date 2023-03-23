#include <stdio.h>
/**
 * main - Fizz-Buzz
 * @size: Size
 * Return: always 1
 */
void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				n = size - j;
				if (i > n)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
