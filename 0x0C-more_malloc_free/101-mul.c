#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: new string
 */
char *_strdup(char *str)
{
	char *dup;
	size_t i;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * strlen(str) + 1);
	if (dup != NULL)
	{
		for (i = 0; i < strlen(str); i++)
			dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}

/**
 * ParseNumbers- ParseNumbers
 * @ac: argc
 * @av: argv
 * Return: true/false
 */

char *revString(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	if (!str)
		return str;
	j = strlen(str) - 1;
	while (i < j) 
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

int ParseNumbers(int ac, char **av)
{
	int i;
	int j;

	if (ac != 3)
		return (0);

	for (i = 1; i < 3; i++)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (0);
			j++;
		}
	}
	return (1);
}
/**
 * _realloc - realloc
 * @ptr: ptr
 * @old_size: old_size
 * @new_size: new size
 * Return: ptr to new address
 */
char *reallocAndPushByOne(char *ptr, int oldSize)
{
	char *newPtr;
	int i;

	newPtr = malloc(oldSize + 1);
	if (newPtr == NULL)
		exit(98);
	i = 0;
	newPtr[0] = '0';
	while (i <= oldSize)
	{
		newPtr[i + 1] = ptr[i];
		i++;
	}
	newPtr[oldSize + 1] = '\0';
	if (ptr)
		free(ptr);
	return (newPtr);
}

char *mult(char* nb1, char nb2)
{
	char *result;
	int r;
	int m;
	int i;

	i = 0;
	r = 0;
	result = malloc(1);
	*result = 0;
	while (nb1 && *nb1 && i < 50)
	{

		result = reallocAndPushByOne(result, i);
		m =  (int)(*nb1 - '0') * (int)(nb2 - '0') + r;
		r = m / 10;
		m %= 10;
		*result = '0' + m;
	/*	printf("multiplication : nb1 = %c; nb2 = %c; m = %d, result = %s\n", *nb1, nb2, m, result);
	*/	nb1++;
		i++;
	}
	if (r > 0)
	{
		result = reallocAndPushByOne(result, i);
		*result = '0' + r;
	}
	return (result);
}

char *addString(char *oldResult, char *nb2, int coeff)
{
	char *result = NULL;
	char *ptrOldResult = NULL;
	int i = 0;
	int m = 0;
	int r = 0;

	if (oldResult == NULL)
	{
		result = malloc(strlen(nb2) + 1);
		while (nb2 && nb2[i])
		{
			result[i] = nb2[i];
			i++;
		}
	}
	else
	{
		revString(oldResult);
		revString(nb2);
		result = malloc(1);
		if (result == NULL)
			exit (98);
		*result = 0;
		while (coeff-- > 0)
		{
			printf("nb2 = %s\n", nb2);
		//	nb2 = reallocAndPushByOne(nb2, strlen(nb2));
			nb2 = strdup(strcat(nb2, "0"));
			printf("nb2 = %s\n", nb2);
		}
		ptrOldResult = oldResult;
		while ((nb2 && *nb2) || (oldResult && *oldResult))
		{
			result = reallocAndPushByOne(result, i);
			m =  (int)(*oldResult ? *oldResult - '0' : 0) + (int)(*nb2 ? *nb2 - '0' : 0) + r;
			r = m / 10;
			m %= 10;
			*result = '0' + m;
		//	printf("Addition : nb1 = %c; nb2 = %c; m = %d, result = %s\n", *oldResult, *nb2, m, result);
			if (*oldResult)
				oldResult++;
			if (*nb2)
				nb2++;
			i++;
		}
		if (r > 0)
		{
			result = reallocAndPushByOne(result, i);
			*result = '0' + r;
		}
	}
//	if (ptrOldResult)
//		free (ptrOldResult);
	return (result);
}

void run(char *nb1, char *nb2)
{
	char **array = NULL;
	char *result = NULL;
	int i;
	int sizeNb2 = 0;

	revString(nb1);
	revString(nb2);
	sizeNb2 = strlen(nb2);
	array = malloc(sizeNb2 + 1);
	result = NULL;
	if (array == NULL)
		exit (98);
	for (i = 0; i < sizeNb2; i++)
	{
		array[i] = mult(nb1, (int)nb2[i]);
		printf("Result mlt[%d] = %s\n", i, array[i]);
		result = addString(result, array[i], i);
		printf("Result Add[%d] = %s\n", i, result);
	//	if (array[i])
	//		free(array[i]);
	}
	printf ("Final result : %s\n",result);
	array[sizeNb2] = NULL;
}

/**
 * main- main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (!ParseNumbers(argc, argv))
		printf("Error\n");
	else
		run(argv[1], argv[2]);
	return (0);
}
