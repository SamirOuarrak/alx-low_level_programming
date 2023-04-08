#include "main.h"
/**
 * print_rev- print reverse string
 * @s: string
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s && *s != '\0' && *(s + 1) != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
