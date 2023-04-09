#include "main.h"
/**
 * _puts- swap
 * @str: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
