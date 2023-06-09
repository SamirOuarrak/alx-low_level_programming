#include "main.h"
#include <stdlib.h>

/**
 * create_array- creates an array of chars
 * @size: size
 * @c: Char
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str != NULL)
	{
		for (i = 0; i < size; i++)
		str[i] = c;
	}
	return (str);
}
