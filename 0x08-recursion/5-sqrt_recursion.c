#include "main.h"
/**
 * _sqrt_recursion_helper - helper
 * @n: number
 * @low: low
 * @high: high
 * Return: square root of n
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	if (low * low == n)
		return (low);
	else if (low * low > n || low > high)
		return (-1);
	return (_sqrt_recursion_helper(n, low + 1, high));
}

/**
 * _sqrt_recursion - return square root of a nb
 * @n: nb to calculate
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1, n / 2));
}
