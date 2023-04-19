#include<stdio.h>
#include<stdlib.h>
/**
 * main- main
 *@argc: argc
 *@argv: argv
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;
	char *main_ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
