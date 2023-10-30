#include "main.h"
/**
 * print_error - functiont to display error message and exit
 * with an error code
 * @error_code: the error code to display from the stream
 * @mess: message from the error
 *
 * Retuen: void
 */
void print_error(int error_code, const char *mess, ...)
{
	va_list args;

	va_start(args, mess);

	dprintf(2, "Error: ");
	vdprintf(2, mess, args);
	dprintf(2, "\n");
	va_end(args);

	exit(error_code);
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
	char buffer[1024];
	ssize_t bread, bwrite;

	input_fd = open(file_from, O_RDONLY, 0664);
	output_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (output_fd == -1)
		print_error(99, "Error: Can't write to file %s", file_to);
	while ((bread = read(input_fd, buffer, 1024)) > 0)
	{
		bwrite = write(output_fd, buffer, bread);
		if (bwrite != bread)
			print_error(99, "Error: Can't write to file", file_to);
	}
	if (bread == -1)
		print_error(98, "Error: Can't read from file");
	if (close(input_fd == -1))
		print_error(100, "Error: Can't close fd %d", input_fd);
	if (close(output_fd) == -1)
		print_error(100, "Error: Can't close fd %d", output_fd);
}
/**
 * main - program that copy content of a file to another
 * @argc: number of argument
 * @argv: array of argument value
 *
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to");
	copy_file(argv[1], argv[2]);
	return (0);
}
