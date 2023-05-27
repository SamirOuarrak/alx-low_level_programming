#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_binary - print_binary
 * @n: number
 * Return:
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 2;
	unsigned long int j = 0;

	while (i <= n && j < 62)
		i = i << 1, j++;
	if (j != 62)
		i = i >> 1;
	while (i)
	{
		if (i & n)
			j++, write(1, '1', 1);
		else
			j++, write(1, '0', 1);
		i = i >> 1;
	}
}
