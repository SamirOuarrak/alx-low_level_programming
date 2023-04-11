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
	str = malloc(sizeof(unsigned int) * size + 1);
	for (i = 0; i < size; i++)
		str[i] = c;
	str[i] = '\0';
	return (str);
}
