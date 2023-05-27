#include "main.h"

/**
* set_bit - set_bit
* @n: n
* @index: index
* Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
