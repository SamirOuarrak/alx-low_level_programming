#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int sum = 2;

	while (b <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
