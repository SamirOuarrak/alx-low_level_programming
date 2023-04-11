#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concat
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = malloc(sizeof(str) * (strlen(s1) + strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (s1 && *s1)
		*str++ = *s1++;
	while (s2 && *s2)
		*str++ = *s2++;
	*(++str) = '\0';
	return (ptr);
}
