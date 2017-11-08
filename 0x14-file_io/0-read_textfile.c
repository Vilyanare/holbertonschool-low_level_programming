#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of text file
 * @letters: how many letters to read
 * Return: letters written to screen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	size_t countr = 0;
	size_t countw = 0;
	char *buf = NULL;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	countr = read(fd, buf, letters);
	countw = write(STDOUT_FILENO, buf, countr);
	close(fd);
	if (countr == countw)
		return ((ssize_t) countr);
	return (0);
}
