#include "main.h"
/**
 * _strpbrk-searches a string for any of a set of bytes
 * @s: source
 * @accept: to find
 * Return: count
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
