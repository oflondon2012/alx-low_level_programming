#include "main.h"
/**
 * main - program that copy content of a file to another
 * @argc: argument
 * @argv: array of argument value
 *
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printErExit(97, "Usage: cp file_from file_to");
	copy_file(argv[1], argv[2]);
	return (0);
}
/**
 * printErExit - functiont to display error message and exit
 * with an error code
 * @error_code: the error code to display from the stream
 * @mess: message from the error
 *
 * Retuen: void
 */
void printErExit(int error_code, const char *mess)
{
	dprintf(STDERR_FILENO, "Error: %s\n", mess);
	exit(error_code);
}
/**
 * open_file - function that open file for reading
 * @filename: name of the file to open
 * @flags: file flag
 * @mode: file mode
 *
 * Return: file description
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		printErExit(98, "Error: Can't read from file");
	return (fd);
}
/**
 * close_file - function to close the open file
 * @file_desc: file descriptor
 *
 * Return: void
 */
void close_file(int file_desc)
{
	if (close(file_desc) == -1)
		printErExit(100, "Can't close fd");
}
/**
 * copy_file - function that copy file to another file
 * @file_from: from where to copy from
 * @file_to: the desctination to copy to
 *
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int input_fd, output_fd;
	char buffer[BUFFER_SIZE];
	ssize_t bread, bwrite;

	input_fd = open_file(file_from, O_RDONLY, 0664);
	output_fd = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((bread = read(input_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bwrite = write(output_fd, buffer, bread);
		if (bwrite != bread)
			printErExit(99, "Can't write to file");
	}
	if (bread == -1)
		printErExit(98, "Can't read from file");
	close_file(input_fd);
	close_file(output_fd);
}
