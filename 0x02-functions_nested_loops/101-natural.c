#include <stdio.h>
/**
 * getSum - getSum.
 * @n: nb to caculate
 * Return: sum.
 */

int getSum(int n)
{
	if (n <= 3)
	{
		return (3);
	}
	else if (n % 3 == 0 || n % 5 == 0)
	{
		return (n + getSum(n - 1));
	}
	return (getSum(n - 1));
}
/**
 * main - 101-Program.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", getSum(1023));
	return (0);
}
