#include <stdio.h>
/**
 * bonacci - bonacci calculate.
 * @a : first number (1)
 * @b : Second number (2)
 * @count : count recurssion
 */

void bonacci(unsigned long a, unsigned long b, int count)
{
	if (a == 1)
	{
		printf("1, ");
	}
	if (count < 50)
	{
		if (a != 1)
		{
			printf(", ");
		}
		printf("%lu", b);
		bonacci(b, a + b, count + 1);
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	bonacci(1, 2, 1);
	printf("\n");
	return (0);
}
