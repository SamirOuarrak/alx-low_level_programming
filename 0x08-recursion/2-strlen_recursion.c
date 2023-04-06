#include "main.h"
/**
 * _strlen_recursion - lenght of string
 * @s: string to print
 * Return: len string
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}
