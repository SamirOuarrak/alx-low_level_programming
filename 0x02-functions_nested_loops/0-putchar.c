#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char myString[] = "_putchar\n";

	write(0, myString, 9);
	return (0);
}
