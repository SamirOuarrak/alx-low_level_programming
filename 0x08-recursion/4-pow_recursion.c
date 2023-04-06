#include "main.h"
/**
 * _pow_recursion - return x raised to y.
 * @x: number
 * @y: power
 * Return: x pow y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (y == 0 ? 1 : x * _pow_recursion(x, y - 1));
}
