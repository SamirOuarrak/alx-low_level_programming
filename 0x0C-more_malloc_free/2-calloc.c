#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc : calloc
 * @nmemb: nmemb
 * @size: size
 * Return: ptr to new address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	char *ptr;

	n = strlen(s2) > n ? n : strlen(s2);
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
