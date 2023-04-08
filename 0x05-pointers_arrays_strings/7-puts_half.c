#include "main.h"
/**
 * puts_half- Half of string
 * @s: string
 */
void puts_half(char *s)
{
	int len;
	char *ptr;

	len = 0;
	ptr = s;
	while (s && *s != '\0')
	{
		len++;
		s++;
	}
	len = len / 2;
	while (ptr[len] != '\0')
	{
		_putchar(*(ptr + len));
		len++;
	}
	_putchar('\n');
}
