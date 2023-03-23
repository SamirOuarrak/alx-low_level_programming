#include "main.h"
/**
 * _isupper - check if 'c' is lower
 * @c: char to check
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
