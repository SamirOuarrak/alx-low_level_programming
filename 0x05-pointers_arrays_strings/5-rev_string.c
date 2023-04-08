#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * rev_string- rev str
 * @s: string
 */
void rev_string(char *s)
{
	int len;
	char *str;
	char *ptr;

	len = 0;
	str = malloc((len + 1) * sizeof(char));
	ptr = str;
	while (s && *(s + len) != '\0')
	{
		*(str + len) = *(s + len);
		len++;
	}
	len--;
	if (len > 0)
	{
		while (len >= 0)
		{
			*(s + len) = *str;
			len--;
			str++;
		}
	}
	free(ptr);
}
