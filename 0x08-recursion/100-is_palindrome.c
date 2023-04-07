#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - lenght of string
 * @s: string to print
 * Return: len string
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - Helper
 * @s: string to check
 * @start : start from 0
 * @end : end - len(s)
 * Return: IsPalindrome
 */
int is_palindrome_helper(int start, int end, char *s)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(start + 1, end - 1, s));
}

/**
 * is_palindrome - isPalindrome
 * @s: string to check
 * Return: IsPalindrome
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(0, _strlen_recursion(s) - 1, s));
}
