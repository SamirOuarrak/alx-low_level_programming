#include <stdio.h>
#include <stdlib.h>

/**
 * getChange - getChange
 * @c: change
 * Return: nb change.
 */

int getChange(int c)
{
	int count;
	int change[5] = {25, 10, 5, 2, 1};
	int i;

	count = 0;
	for (i = 0; i < 5; i++)
	{
		count += c / change[i];
		c %= change[i];
	}
	return (count);
}
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] < '0' ||  argv[1][i] > '9')
			{
				printf("Error\n");
				return (0);
			}
			i++;
		}
		printf("%d\n", getChange(atoi(argv[1])));
	}
	else
		printf("Error\n");
	return (0);
}