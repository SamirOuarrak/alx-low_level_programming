#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_concat - concat
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	char *ptr;

	s = malloc(sizeof(s) * ((s1 ? strlen(s1) : 0) + (s2 ? strlen(s2) : 0) + 1));
	if (s == NULL)
		return (NULL);
	ptr = s;
	while (s1 && *s1)
		*s++ = *s1++;
	while (s2 && *s2)
		*s++ = *s2++;
	*s = '\0';
	return (ptr);
}
