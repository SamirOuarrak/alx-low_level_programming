#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int sum;
	int i;

	sum = 0;
	if (argc > 1)
	{
		while (argc-- > 0)
		{
			i = 0;
			while argv[argc][i]
			{
				if argv[argc][i] < '0' ||  argv[argc][i] > '9'
				{
					printf("Error\n");
					return(0);
				}
				i++:
			}
			sum += atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
