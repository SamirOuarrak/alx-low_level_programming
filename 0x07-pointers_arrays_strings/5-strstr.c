#include "main.h"
/**
 * _strstr-  locates a substring
 * @haystack: source
 * @needle: to find
 * Return: pointer to needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (!needle[j])
		return (haystack);
	while (haystack[i])
	{
		k = i;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char*)(haystack + i - j));
			continue;
		}
		i = k + 1;
		j = 0;
	}
	return (NULL);
}
