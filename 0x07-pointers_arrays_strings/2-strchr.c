#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: char to locate
 * @s: source
 * Return: destination
 */
char *_strchr(char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
