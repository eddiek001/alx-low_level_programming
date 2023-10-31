#include "main.h"
#include <stdio.h>
/**
 * error_file - check if a file is opened
 * @file_from: initial file to copy from and to check
 * @file_to: destination file to copy
 * @argv: argument vector
 * Return: no return:
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

}
/**
 * main - copy content of a file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchar, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 664);
	error_file(file_from, file_to, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buff, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buff, nchar);
			if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
