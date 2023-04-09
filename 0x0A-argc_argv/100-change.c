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
	if (argc == 2)
		printf("%d\n", getChange(atoi(argv[1])));
	else
		printf("Error\n");
	return (0);
}
