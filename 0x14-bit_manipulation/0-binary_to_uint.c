#include "main.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: b
 * Return: ret
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb;
	int j, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	nb = 0;
	for (j = 0; b[j]; j++)
	{
		nb = nb << 1;

		if (b[j] == '1')
			nb = nb + 1;
	}
	return (nb);
}
