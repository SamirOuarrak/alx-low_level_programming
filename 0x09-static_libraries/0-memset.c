#include "main.h"
/**
 * _memset - fills the n bytes of the memory area ptd to by s with b
 * @s: destination
 * @b: source
 * @n: nb characters
 * Return: destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
