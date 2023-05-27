#include "main.h"

/**
 * create_file - create_file.
 * @filename: filename
 * @text_content: text_content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[i])
		i++;
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
