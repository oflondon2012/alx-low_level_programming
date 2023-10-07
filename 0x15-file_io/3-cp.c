#include "main.h"
#include <stdio.h>

void error_handling(const char *message, const char *filename, int exit_code);
/**
 * main - Program that copies the content of a file to another file
 * @argc: count of argument
 * @argv: vector of argument
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_handling("Error: Can't read from file", file_from, 98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_handling("Error: Can't write to file", file_to, 99);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_handling("Error: Can't write to file", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		error_handling("Error: Can't read from file", file_from, 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_handling("Error: Can't close fd", "", 100);
	}

	return (0);
}

/**
 * error_handling - function that check if a file can open or close
 * @message: pointing to name of file
 * @filename: either close  or open
 * @exit_code: vector argument
 *
 * Return: void
 */
void error_handling(const char *message, const char *filename, int exit_code)
{
	if (filename[0] != '\0')
	{
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s\n", message);
	}
	exit(exit_code);
}
