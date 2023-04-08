#include "main.h"
/**
 * cap_string- cap sring
 * @s: source
 * Return: destination
 */
char *cap_string(char *s)
{
	char *ptr;
	const char *sep = " \t\n,;.!?\"()";
	int i;

	ptr = s;
	while (s && *s)
	{
		i = 0;
		while (sep[i])
		{
			if (sep[i++] == *s)
				*(s + 1) = *(s + 1) >= 'a' && *(s + 1) <= 'z' ? *(s + 1) - 32 : *(s + 1);
		}
		s++;
	}
	return (ptr);
}
