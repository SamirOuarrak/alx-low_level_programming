#include <stdio.h>
/**
 * bonacci - bonacci calculate.
 * @a : first number (1)
 * @b : Second number (2)
 */

void bonacci(int a, int b)
{
	if (a == 1)
	{
		printf("1, ");
	}
	if (b <= 50)
	{
		if (a != 1)
		{
			printf(", ");
		}
		printf("%d", b);
		bonacci(b, a + b);
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	bonacci(1, 2);
	printf("\n");
	return (0);
}
