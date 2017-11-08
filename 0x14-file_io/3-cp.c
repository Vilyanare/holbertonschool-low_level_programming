#include "holberton.h"
/**
 * txt_buf - reads a text file and returns buffer
 * @filename: name of text file
 * @letters: how many characters to read
 * Return: address of buffer
 */
char *txt_buf(const char *filename, size_t letters)
{
	int fd = 0;
	int countr = 0;
	char *buf = NULL;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	countr = read(fd, buf, letters);
	if (countr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (countr == 1024)
	{
		buf[1023] = '\0';
		return (buf);
	}
	else
	{
		buf[countr + 2] = '\0';
		return (buf);
	}
}
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to append
 * @text_content: text to append to file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, x = 0, t = 0;

	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (text_content != NULL)
	{
		for (; text_content[x]; x++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (x > 0)
		if (write(fd, text_content, x) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (t < 0)
		return (-1);
	return (1);
}
/**
 * creat_fil - creates a file
 * @filename: name to give to file
 * Return: 1 on success -1 on failure
 */
int creat_fil(const char *filename)
{
	int fd = 0;

	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
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
	int x = 0;
	char *temp = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	temp = txt_buf(argv[1], BUF_SIZE);
	creat_fil(argv[2]);
	append_text_to_file(argv[2], temp);
	for (x = 0; temp[x]; x++)
		;
	free(temp);
	if (x + 1 == BUF_SIZE)
	{
		do {
			temp = txt_buf(argv[1], BUF_SIZE);
			append_text_to_file(argv[2], temp);
			for (x = 0; temp[x]; x++)
				;
			free(temp);
		} while (x + 1 == BUF_SIZE);
	}
	return (0);
}
