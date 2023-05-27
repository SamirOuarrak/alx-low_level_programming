#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: size letters
 * Return: the actual number of letters, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, ret, w;
	char *text;

	text = malloc(letters);
	if (!text || !filename)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	ret = read(file, text, letters);

	w = write(STDOUT_FILENO, text, ret);

	close(file);

	return (w);
}
