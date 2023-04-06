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
	int mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_recursion_helper(n, low, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, high));
}

/**
 * _sqrt_recursion - return square root of a nb
 * @n: nb to calculate
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion_helper(n, 1, n / 2));
}
