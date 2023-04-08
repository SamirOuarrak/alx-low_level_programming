#include "main.h"
/**
 * reverse_array- reverse array
 * @a: table
 * @n: number
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	i = 0;
	while (--n >= i)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
		i++;
	}
}
