#include "main.h"
/**
 * _strspn- gets the length of a prefix substring
 * @s: source
 * @accept: to find
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
