#include "main.h"
/**
 * puts2- put str (1 / 2)
 * @s: string
 */
void puts2(char *s)
{
	int len;

	len = 0;
	while (s && *s != '\0')
	{
		if (len % 2 == 0)
			_putchar(*s);
		len++;
		s++;
	}
	_putchar('\n');
}
