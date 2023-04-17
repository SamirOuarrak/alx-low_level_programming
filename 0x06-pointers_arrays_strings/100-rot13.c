#include "main.h"
/**
 * rot13- rot13
 * @str: toRotate
 * Return: rotateString
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
			*ptr += 13;
		else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
			*ptr -= 13;
		ptr++;
	}
	return (str);
}
