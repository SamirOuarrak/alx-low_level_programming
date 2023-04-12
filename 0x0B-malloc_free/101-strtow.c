#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * countWord - count word
 * @str: string
 * Return: count word
 */

int countWord(char *str)
{
	int count;

	count = 0;
	while (*str && *str++ == ' ')
		;
	while (*str)
	{
		if (*str == ' ' && *(str + 1))
			count++;
		while (*str && *str++ == ' ')
			;
	}
	return (count);
}

/**
 * getLen - getLen word
 * @str: string
 * Return: len next word
 */

int getLen(char *str)
{
	int count;

	count = 0;
	while (*str && *str == ' ')
		str++;
	while (*str && *str != ' ')
	{
		count++;
		str++;
	}
	return (count);
}
/**
 * strtow - splits a string into words.
 * @str: string
 * Return: string
 */
char **strtow(char *str)
{
	char **arr;
	int i;
	int j;

	if (!str || !*str || countWord(str) == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * (countWord(str) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		j = 0;
		while (*str && *str == ' ')
			str++;
		if (!*str)
			break;
		arr[i] = malloc(sizeof(**arr) * getLen(str) + 1);
		if (arr[i] == NULL)
		{
			while (i > 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		while (*str && *str != ' ')
		{
			arr[i][j] = *str;
			str++;
			j++;
		}
		arr[i][j] = '\0';
		while (*str && *str == ' ')
			str++;
		i++;
		}
	arr[i] = NULL;
	return (arr);
}
