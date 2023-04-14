#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concat n from s2
 * @s1: string 1
 * @s2: string 2
 * @n : size of s2 to copy
 * Return: s1 + s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	char *ptr;
	size_t lenS2;

	lenS2 = s2 ? strlen(s2) : 0;
	n = lenS2 > n ? n : lenS2;
	s = malloc(sizeof(char) * (s1 ? strlen(s1) : 0) + n + 1);
	if (s == NULL)
		return (NULL);
	ptr = s;
	while (s1 && *s1)
		*s++ = *s1++;
	while (n-- > 0)
		*s++ = *s2++;
	*s = '\0';
	return (ptr);
}
