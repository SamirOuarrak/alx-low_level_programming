#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @c: int to prints the last digit of a number.
 * Return: last digit
 */
int print_last_digit(int c)
{
	unsigned int d;

	d = c < 0 ? -c : c;
	_putchar('0' + d % 10);
	return (d % 10);
}
