#include "main.h"
/**
 * print_sign - print 'c' sign
 * @c: to check
 * Return: 1 if > 0 , 0 if = 0 , -1 if < 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
