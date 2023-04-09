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

	sum = 0;
	if (argc > 1)
		while (argc-- > 0)
			sum += atoi(argv[argc]);
		printf("%d\n", sum);
	else
		printf("0\n");
	return (0);
}
