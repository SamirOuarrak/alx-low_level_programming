#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - realloc
 * @ptr: ptr
 * @old_size: old_size
 * @new_size: new size
 * Return: ptr to new address
 */
char *reallocAndPushByOne(char *ptr)
{
	char *newPtr;
	int i;

	newPtr = malloc(strlen(ptr) + 1);
	if (newPtr == NULL)
		exit(98);
	while (ptr[i])
	{
		newPtr[i] = ptr[i];
		i++;
	}
	newPtr[i] = '\0';
	return (newPtr);
}

/**
 * ParseNumbers- ParseNumbers
 * @ac: argc
 * @av: argv
 * Return: true/false
 */

int ParseNumbers(int ac, char **av)
{
	int i;

	if (ac != 3)
		return (0);
	for (i = 0; i < 2; i++)
	{
		while (*av[i])
		{
			if (*av[i] < '0' || *av[i] > 9)
				return (0);
			av[i]++;
		}
	}
	return (1);
}

char *mult(char* nb1, char nb2)
{
	char *result;
	int r;
	int m;

	result = malloc(1);
	if (result == NULL)
		exit(98);
	result = '\0';
	while (nb1)
	{
		result = reallocAndPushByOne(result);
		m =  (*nb1) + '0' * nb2 + '0' + r;
		r = m % 10;
		m /= 10;
		*result = '0' + m;
		nb1++;
	}
	if (r > 0)
	{
		result = reallocAndPushByOne(result);
		*result = '0' + r;
	}
	return (result);
}

void run(char *nb1, char *nb2)
{
	char **result;
	int i;
	int sizeNb2;

	sizeNb2 = strlen(nb2);
	result = malloc(sizeNb2 + 1);
	if (result == NULL)
		exit (98);
	
	for (i = 0; i < sizeNb2; i++)
	{
		result[i] = mult(nb1, (int)nb2[i]);
		printf("Result[%d] = %s\n", i, result[i]);
	}	
}

/**
 * main- main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	ParseNumbers(argc, argv);
	run(argv[1], argv[2]);
	return (0);
}
