#include "main.h"

/**
* get_bit - get_bit
* @n: nb
* @index: index
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	n = n >> index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
