#include <stdio.h>
/**
 * bonacci - bonacci calculate.
 * @a : first number (1)
 * @b : Second number (2)
 * @count : count recurssion
 * retun : b
 */

unsigned long int bonacci(unsigned long int a, unsigned long int b, int count)
{
	if (a == 1)
	{
		printf("1, ");
	}
	if (count < 91)
	{
		if (a != 1)
		{
			printf(", ");
		}
		printf("%lu", b);
		return(bonacci(b, a + b, count + 1));
	}
	return (b);
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%lu", bonacci(1, 2, 1));
	printf("\n");
	return (0);
}
