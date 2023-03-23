#include <stdio.h>
/**
 * main - Fizz-Buzz
 * Return: always 1
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
