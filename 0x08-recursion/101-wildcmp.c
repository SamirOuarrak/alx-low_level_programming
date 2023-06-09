#include "main.h"

/**
 * wildcmp_helper - compares two strings with wildcard
 * @s1: string 1
 * @s2: string 2 to compare
 * Return: isCmp
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' && *s1 != *(s2 + 1))
		return (wildcmp_helper(s1 + 1, s2));
	if (*s2 == '*' && *s1 == *(s2 + 1))
		return (wildcmp_helper(s1, s2 + 1));
	if (*s2 == *s1)
		return (wildcmp_helper(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcmp - compares two strings with wildcard
 * @s1: string 1
 * @s2: string 2 to compare
 * Return: isCmp
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
