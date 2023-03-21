#include "main.h"
/**
 * _isalpha - check if 'c' is lower
 * @c: char to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
