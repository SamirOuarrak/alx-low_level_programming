#include "main.h"
/**
 * _isdigit - check if 'c' is lower
 * @c: char to check
 * Return: 1 if c is upper, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
