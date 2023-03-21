#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char myStr[] = "_putchar\n";
	int i;

	i = 0;
	while (myStr[i] != '\0')
	{
		_putchar(myStr[i]);
		i++;
	}
	return (0);
}
