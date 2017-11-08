#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name to give to file
 * @text_content: contents of file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, x = 0, t = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[x]; x++)
			;
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	if (x > 0)
		t = write(fd, text_content, x);
	close(fd);
	if (t < 0)
		return (-1);
	return (1);
}
