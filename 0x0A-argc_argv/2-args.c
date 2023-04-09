#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - puts
 * @str: str
 */
void _puts(char *str)
{
	while (str && *str)
		_putchar(*str++);
}

/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		_puts(argv[i]);
		_putchar('\n');
		i++;
	}
	return (1);
}
