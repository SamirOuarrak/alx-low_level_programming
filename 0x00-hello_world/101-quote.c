#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int msg_len = sizeof(msg) - 1;

	write(2, msg, msg_len);

	return (1);
}
