#include "holberton.h"
/**
 * error_func - take in a number and print an error
 * @error: contains error number
 */
void error_func(int error, ...)
{
	va_list a;
	va_start(a, NULL);
	if (error == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (error == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", va_arg(a, char *));
		exit(98);
	}
	else if (error == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", va_arg(a, char *));
		exit(99);
	}
	else if (error == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", va_arg(a, int));
		exit(100);
	}
	va_end(a);
}
/**
 * creat_fil - creates a file
 * @filename: name to give to file
 * Return: 1 on success -1 on failure
 */
int creat_fil(char *filename)
{
	int fd = 0;

	if (filename == NULL)
		error_func(99, filename);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd < 0)
		error_func(99, filename);
	if (close(fd) < 0)
		error_func(100, fd);
	return (1);
}
/**
 * txt_buf - reads from file1 and writes to file2
 * @filename: name of text file
 * @file2: file to write to
 */
void txt_buf(char *filename, char *file2)
{
	int fd1 = 0, fd2 = 0;
	int countr = 0;
	char *buf = NULL;

	buf = malloc(sizeof(char) * BUF_SIZE);
	if (buf == NULL)
		return;
	fd1 = open(filename, O_RDONLY);
	if (fd1 < 0)
		error_func(98, filename);
	creat_fil(file2);
	fd2 = open(file2, O_WRONLY | O_APPEND);
	if (fd2 < 0)
		error_func(99, file2);
	do {
		countr = read(fd1, buf, BUF_SIZE);
		if (countr < 0)
			error_func(98);
		if (write (fd2, buf, countr) < 0)
			error_func(99);
	} while (countr == BUF_SIZE);
	if (close(fd1) < 0)
		error_func(100, fd1);
	if (close(fd2) < 0)
		error_func(100, fd2);
	free(buf);

}
/**
 * main - copies contents of file 1 to file 2
 * @argc: number of arguments
 * @argv: argv1 == file1 argv2 == file2
 * Return: 0 on success
 * 97 if incorrect amount of arguments
 * 98 if file1 doesn't exist or can't read
 * 99 if cannot write to file2
 * 100 if a file can't be closed
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		error_func(97);
	txt_buf(argv[1], argv[2]);
	return (0);
}
