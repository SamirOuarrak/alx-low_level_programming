#include "main.h"
/**
 * _ - print alphabet
 *
 * Return: On success 0.
 */
void print_alphabet(void)
{
	int i;

	for (i='a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
