#include "main.h"
/**
 * leet- leet function
 * @src: source
 * Return: destination
 */
char *leet(char *src)
{
	char *ptr;
	const char *str = "aAeEoOtTlL";
	const char *nb = "4433007711";
	int i;

	ptr = src;

	while (src && *src)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == *src)
				*src = nb[i];
			i++;
		}
		src++;
	}
	return (ptr);
}
