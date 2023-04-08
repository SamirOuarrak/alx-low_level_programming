#include "main.h"
/**
 * string_toupper- toupper
 * @src: source
 * Return: Toupper(source)
 */
char *string_toupper(char *src)
{
	char *ptr;

	ptr = src;
	while (src && *src)
	{
		*src = *src >= 'a' && *src <= 'z' ? *src - 32 : *src;
		src++;
	}
	return (ptr);
}
