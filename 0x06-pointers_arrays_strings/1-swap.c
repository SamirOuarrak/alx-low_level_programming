#include "main.h"
/**
 * swap_int- swap
 * @a: ptr 1
 * @b: ptr 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
