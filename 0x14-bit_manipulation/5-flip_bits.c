#include "main.h"

/**
* flip_bits - set_bit
* @n: n
* @m: m
* Return: 1 or -1
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y = 0;

	x = n ^ m;
	while (x > 0)
	{
		if ((x & 1) != 0)
			y++;
		x = x >> 1;
	}
	return (y);
}
