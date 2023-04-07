#include "main.h"
/**
 * IsPrimeHelper - Helper
 * @n: nb to check
 * @i: to check
 * Return: IsPrime
 *
 */
int IsPrimeHelper(int n, int i)
{
	if (n <= 1 || (i < n && n % i == 0))
		return (0);
	if (i >= (n + 1) / 2)
		return (1);
	return (IsPrimeHelper(n, i + 1));

}
/**
 * is_prime_number - IsPrime
 * @n: nb to check
 * Return: IsPrime
 *
 */
int is_prime_number(int n)
{
	return (IsPrimeHelper(n, 2));
}
