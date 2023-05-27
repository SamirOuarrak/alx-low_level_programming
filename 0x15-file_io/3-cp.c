#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main
 * @argc: argument count
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ffrom, fto;
	int num1 = 1024, num2 = 0;
	char buf[BUFF];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
	| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(ffrom), exit(99);
	}
	while (num1 == 1024)
	{
		num1 = read(ffrom, buf, 1024);
		if (num1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(fto, buf, num1);
		if (num2 < num1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(ffrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom), exit(100);
	if (close(fto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto), exit(100);
	return (0);
}
