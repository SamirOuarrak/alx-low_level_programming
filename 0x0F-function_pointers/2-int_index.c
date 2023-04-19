#include "function_pointers.h"
/**
 * int_index- searches for an integer.
 * @array: array
 * @size: size
 * @cmp: function pointer
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array || !size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);
}
